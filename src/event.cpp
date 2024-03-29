#include "../include/event.h"

#include "../include/action.h"
#include "../include/arg.h"
#include "../include/global.h"
#include "../include/input.h"
#include "../include/input_handler.h"

#include <iostream>
#include <memory>

template <typename T>
void action_trigger(T &action, InsertModArgument &arg)
{
  action.executeAction(arg);
}

void Event::InitializeConfig()
{
  actions[ascii::DEL] = std::make_shared<RemovePrevChar>();
  actions[ascii::BS] = std::make_shared<RemoveNextChar>();
}

void Event::Start()
{
  /* not production code, just test :) */
  InitializeConfig();
  AddOneChar add;
  RemoveNextChar remove_next_char;
  MoveCursorLeft move_left_cursor;
  MoveCursorRight move_right_cursor;

  char last_c;
  auto arg = InsertModArgument{ '\0', "", "", "", 0 };

  while (true) {

    std::cout << arg.input << "\n";
    io::read_c(last_c);
    arg.last_char = last_c;

    switch (last_c) {

    case ascii::DEL: /* baskspace */
      actions[ascii::DEL].get()->executeAction(arg);
      continue;

    case ascii::LF: /* enter */
      continue;

    case ascii::ESC: {
      std::cout << "Special ==>   ";
      auto special_key = detect_special_key();
      if (key_map::key["f1"] == special_key) {
        std::cout << "F1";
      } else if (key_map::key["left_arrow"] == special_key) {
        move_left_cursor.executeAction(arg);
      } else if (key_map::key["right_arrow"] == special_key) {
        move_right_cursor.executeAction(arg);
      } else if (key_map::key["delete"] == special_key) {
        remove_next_char.executeAction(arg);
      }
    }
      continue;

    default: {
      add.executeAction(arg);
      continue;
    }
    }
  }
}
