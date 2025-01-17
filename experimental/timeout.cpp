#include <chrono>
#include <condition_variable>
#include <iostream>
#include <mutex>
#include <thread>

using namespace std::chrono_literals;

int
f ()
{
  std::this_thread::sleep_for (
      1s); // change value here to less than 1 second to see Success
  return 1;
}

int
f_wrapper ()
{
  std::mutex m;
  std::condition_variable cv;
  int retValue;

  std::thread t ([&cv, &retValue] () {
    retValue = f ();
    cv.notify_one ();
  });

  t.detach ();

  {
    std::unique_lock<std::mutex> l (m);
    if (cv.wait_for (l, 3s) == std::cv_status::timeout)
      throw std::runtime_error ("Timeout");
  }

  return retValue;
}

int
main ()
{
  bool timedout = false;
  try
    {
      f_wrapper ();
    }
  catch (std::runtime_error &e)
    {
      std::cout << e.what () << std::endl;
      timedout = true;
    }

  if (!timedout)
    std::cout << "Success" << std::endl;

  return 0;
}
