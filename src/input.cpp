#include "../include/input.h"
#include <cstddef>
#include <memory>
#include <string>
#include <unistd.h>

namespace io {

int read_to_str(std::string &buffer, std::size_t n_byte)
{
  std::unique_ptr<char[]> temp(new char[n_byte]);

  if (static_cast<bool>(read(STDIN_FILENO, temp.get(), n_byte))) {
    buffer = std::string(temp.get(), n_byte);
    return 1;
  }
  return 0;
}

int read_c(char &a_ch)
{
  if (static_cast<bool>(read(STDIN_FILENO, &a_ch, 1))) {
    return 1;
  }
  return 0;
}
}  // namespace io
