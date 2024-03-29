#include <termios.h>
#include <unistd.h>

#include "../include/terminal.h"

#ifdef __linux__

namespace term {
void TerminalInputMode::noncanonical_mode()
{
  tcgetattr(STDIN_FILENO, &old_attr);
  new_attr = old_attr;
  new_attr.c_lflag &= ~(ICANON | ECHO);  // Disable canonical mode and echo
  tcsetattr(STDIN_FILENO, TCSANOW, &new_attr);
}

void TerminalInputMode::canonical_mode()
{
  tcsetattr(STDIN_FILENO, TCSANOW, &old_attr);
}

#else
#endif

}  // namespace term
