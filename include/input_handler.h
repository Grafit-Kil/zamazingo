#ifndef INPUT_HANDLER_H
#define INPUT_HANDLER_H

#include <cstddef>
#include <string>

struct KeyMatchResult {
  bool match;
  bool complete;
};

KeyMatchResult check_key_match(char search_char, size_t look_at_index);
std::string detect_special_key();

#endif  // INPUT_HANDLER_H
