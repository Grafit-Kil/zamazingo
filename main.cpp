#include <clocale>

#include "include/event.h"
#include "include/terminal.h"

int main()
{
  std::setlocale(LC_ALL, "");

  term::TerminalInputMode::noncanonical_mode();

  Event evn;
  evn.Start();
  return 0;
}
