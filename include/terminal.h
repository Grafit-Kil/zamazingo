#ifndef TERMINAL_H
#define TERMINAL_H

#include <string>
#include <termios.h>

namespace term {
class TerminalInputMode {
public:
  static void noncanonical_mode();
  static void canonical_mode();

private:
  static inline termios old_attr;
  static inline termios new_attr;
};

}  // namespace term

#endif  // TERMINAL_H
