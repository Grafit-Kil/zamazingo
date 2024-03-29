#include "../include/global.h"

namespace key_map {

std::map<std::string, std::string> key{
  { "f1", "\x1BOP" },         { "f2", "\x1BOQ" },         { "f3", "\x1BOR" },
  { "f4", "\x1BOS" },         { "f5", "\x1B[15~" },       { "f6", "\x1B[17~" },
  { "f7", "\x1B[18~" },       { "f8", "\x1B[19~" },       { "f9", "\x1B[20~" },
  { "f10", "\x1B[21~" },      { "f11", "\x1B[23~" },      { "f12", "\x1B[24~" },
  { "up_arrow", "\x1B[A" },   { "down_arrow", "\x1B[B" }, { "right_arrow", "\x1B[C" },
  { "left_arrow", "\x1B[D" }, { "delete", "\x1B[3~" },    { "insert", "\x1B[2~" },
  { "home", "\x1B[H" },       { "end", "\x1B[F" },        { "page_up", "\x1B[5~" },
  { "page_down", "\x1B[6~" }, { "escape", "\x1B" }
};

}
