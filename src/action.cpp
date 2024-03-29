#include "../include/action.h"

#include <cctype>
#include <cstddef>
#include <locale>

void AddOneChar::executeAction(InsertModArgument &arg)
{
  arg.input.insert(arg.cursor_x, 1, arg.last_char);
  arg.cursor_x++;
}

void RemovePrevChar::executeAction(InsertModArgument &arg)
{
  if (arg.input.size()) {
    arg.input.erase(arg.cursor_x - 1, 1);
    arg.cursor_x--;
  }
}

void RemoveNextChar::executeAction(InsertModArgument &arg)
{
  if (arg.input.size() > (arg.cursor_x))
    arg.input.erase(arg.cursor_x, 1);
}

void SelectRightWord::executeAction(InsertModArgument &arg)
{
  std::locale loc("C");
  if (!std::isalpha(arg.input[arg.cursor_x], loc)) {
    arg.selected_text += arg.input[arg.cursor_x];
  } else {
    for (size_t i = arg.cursor_x; i < arg.input.size(); i++) {
      if (std::isalpha(arg.input[i], loc)) {
        arg.selected_text += arg.input[i];
      }
    }
  }
}

void SelectLeftWord::executeAction(InsertModArgument &arg)
{
  std::locale loc("C");
  if (arg.cursor_x) {
    if (!std::isalpha(arg.input[arg.cursor_x - 1], loc)) {
      arg.selected_text += arg.input[arg.cursor_x - 1];
    } else {
      for (size_t i = arg.cursor_x; i > 0; i--) {
        if (std::isalpha(arg.input[i - 1], loc)) {
          arg.selected_text += arg.input[i];
        }
      }
    }
  }
}

void RemoveLine::executeAction(InsertModArgument &arg)
{
  arg.input.clear();
  arg.cursor_x = 0;
}
void MoveCursorRight::executeAction(InsertModArgument &arg)
{
  if (arg.input.size() > arg.cursor_x) {
    arg.cursor_x++;
  }
}
void MoveCursorLeft::executeAction(InsertModArgument &arg)
{
  if (arg.cursor_x > 0) {
    arg.cursor_x--;
  }
}
void Redo::executeAction(InsertModArgument &arg)
{
}
