#include <cstddef>
#include <utility>

#include "../include/global.h"
#include "../include/input.h"
#include "../include/input_handler.h"

KeyMatchResult check_key_match(char search_char, size_t look_at_index)
{
  for (const auto &item : key_map::key) {
    if (item.second[look_at_index] == search_char) {
      if (item.second.size() - 1 > look_at_index) {
        return { true, true };
      }
      return { true, false };
    }
  }
  return { false, false };
}

std::string detect_special_key()
{
  std::string spec_k{ "\x1B" };
  char check_ch = { ascii::NUL };

  for (size_t i = 1;; i++) {
    io::read_c(check_ch);
    if (check_ch == '\x1B') {
      break;
    }
    auto match_result{ check_key_match(check_ch, i) };

    if (match_result.match && match_result.complete) {
      spec_k += check_ch;
    } else if (match_result.match && !match_result.complete) {
      spec_k += check_ch;
      break;
    } else {
      spec_k = "";
      break;
    }
  }
  return spec_k;
}
