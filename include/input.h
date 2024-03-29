#ifndef INPUT_H
#define INPUT_H

#include <string>

namespace io {
int read_to_str(std::string &buffer, std::size_t n_byte);
int read_c(char &a_ch);
}  // namespace io

#endif  // INPUT_H
