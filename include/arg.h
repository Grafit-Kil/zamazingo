#ifndef ARG_H
#define ARG_H
#include <cstddef>
#include <cstdint>
#include <stack>
#include <string>

struct InsertModArgument {
  int8_t last_char;
  std::string input;
  std::string text_buffer;
  std::string selected_text;
  size_t cursor_x;
};

struct WindowManagerModArgument {
  uint8_t last_char;
  std::string input;
};

#endif  // ARG_H
