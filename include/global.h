#ifndef GLOBAL_H
#define GLOBAL_H

#include <map>
#include <string>

namespace key_map {
extern std::map<std::string, std::string> key;
}

namespace ascii {

constexpr char NUL = '\x00';                   // Null character
constexpr char SOH = '\x01';                   // Start of Heading
constexpr char STX = '\x02';                   // Start of Text
constexpr char ETX = '\x03';                   // End of Text
constexpr char EOT = '\x04';                   // End of Transmission
constexpr char ENQ = '\x05';                   // Enquiry
constexpr char ACK = '\x06';                   // Acknowledgment
constexpr char BEL = '\x07';                   // Bell
constexpr char BS = '\x08';                    // Backspace -> Backspace
constexpr char TAB = '\x09';                   // Horizontal Tab -> TAB
constexpr char LF = '\x0A';                    // Line Feed (Newline)
constexpr char VT = '\x0B';                    // Vertical Tab
constexpr char FF = '\x0C';                    // Form Feed
constexpr char CR = '\x0D';                    // Carriage Return
constexpr char SO = '\x0E';                    // Shift Out
constexpr char SI = '\x0F';                    // Shift In
constexpr char DLE = '\x10';                   // Data Link Escape
constexpr char DC1 = '\x11';                   // Device Control 1 (XON)
constexpr char DC2 = '\x12';                   // Device Control 2
constexpr char DC3 = '\x13';                   // Device Control 3 (XOFF)
constexpr char DC4 = '\x14';                   // Device Control 4
constexpr char NAK = '\x15';                   // Negative Acknowledgement
constexpr char SYN = '\x16';                   // Synchronous Idle
constexpr char ETB = '\x17';                   // End of Transmission Block
constexpr char CAN = '\x18';                   // Cancel
constexpr char EM = '\x19';                    // End of Medium
constexpr char SUB = '\x1A';                   // Substitute
constexpr char ESC = '\x1B';                   // Escape -> ESC
constexpr char FS = '\x1C';                    // File Separator
constexpr char GS = '\x1D';                    // Group Separator
constexpr char RS = '\x1E';                    // Record Separator
constexpr char US = '\x1F';                    // Unit Separator
constexpr char SPACE = '\x20';                 // Space
constexpr char EXCLAMATION_MARK = '\x21';      // Exclamation mark -> !
constexpr char DOUBLE_QUOTES = '\x22';         // Double quotes -> "
constexpr char HASH = '\x23';                  // Number sign (Hash) -> #
constexpr char DOLLAR_SIGN = '\x24';           // Dollar sign -> $
constexpr char PERCENT = '\x25';               // Percent -> %
constexpr char AMPERSAND = '\x26';             // Ampersand -> &
constexpr char SINGLE_QUOTE = '\x27';          // Single quote (Apostrophe) -> '
constexpr char LEFT_PARENTHESIS = '\x28';      // Left parenthesis -> (
constexpr char RIGHT_PARENTHESIS = '\x29';     // Right parenthesis -> )
constexpr char ASTERISK = '\x2A';              // Asterisk -> *
constexpr char PLUS = '\x2B';                  // Plus -> +
constexpr char COMMA = '\x2C';                 // Comma -> ,
constexpr char HYPHEN = '\x2D';                // Hyphen (Minus) -> -
constexpr char PERIOD = '\x2E';                // Period (Full stop) -> .
constexpr char FORWARD_SLASH = '\x2F';         // Forward slash -> /
constexpr char DIGIT_ZERO = '\x30';            // Digit Zero -> 0
constexpr char DIGIT_ONE = '\x31';             // Digit One -> 1
constexpr char DIGIT_TWO = '\x32';             // Digit Two -> 2
constexpr char DIGIT_THREE = '\x33';           // Digit Three -> 3
constexpr char DIGIT_FOUR = '\x34';            // Digit Four -> 4
constexpr char DIGIT_FIVE = '\x35';            // Digit Five -> 5
constexpr char DIGIT_SIX = '\x36';             // Digit Six -> 6
constexpr char DIGIT_SEVEN = '\x37';           // Digit Seven -> 7
constexpr char DIGIT_EIGHT = '\x38';           // Digit Eight -> 8
constexpr char DIGIT_NINE = '\x39';            // Digit Nine -> 9
constexpr char COLON = '\x3A';                 // Colon -> :
constexpr char SEMICOLON = '\x3B';             // Semicolon -> ;
constexpr char LESS_THAN_SIGN = '\x3C';        // Less-than sign -> <
constexpr char EQUALS_SIGN = '\x3D';           // Equals sign -> =
constexpr char GREATER_THAN_SIGN = '\x3E';     // Greater-than sign -> >
constexpr char QUESTION_MARK = '\x3F';         // Question mark -> ?
constexpr char AT_SIGN = '\x40';               // At sign -> @
constexpr char UPPERCASE_A = '\x41';           // Uppercase A -> A
constexpr char UPPERCASE_B = '\x42';           // Uppercase B -> B
constexpr char UPPERCASE_C = '\x43';           // Uppercase C -> C
constexpr char UPPERCASE_D = '\x44';           // Uppercase D -> D
constexpr char UPPERCASE_E = '\x45';           // Uppercase E -> E
constexpr char UPPERCASE_F = '\x46';           // Uppercase F -> F
constexpr char UPPERCASE_G = '\x47';           // Uppercase G -> G
constexpr char UPPERCASE_H = '\x48';           // Uppercase H -> H
constexpr char UPPERCASE_I = '\x49';           // Uppercase I -> I
constexpr char UPPERCASE_J = '\x4A';           // Uppercase J -> J
constexpr char UPPERCASE_K = '\x4B';           // Uppercase K -> K
constexpr char UPPERCASE_L = '\x4C';           // Uppercase L -> L
constexpr char UPPERCASE_M = '\x4D';           // Uppercase M -> M
constexpr char UPPERCASE_N = '\x4E';           // Uppercase N -> N
constexpr char UPPERCASE_O = '\x4F';           // Uppercase O -> O
constexpr char UPPERCASE_P = '\x50';           // Uppercase P -> P
constexpr char UPPERCASE_Q = '\x51';           // Uppercase Q -> Q
constexpr char UPPERCASE_R = '\x52';           // Uppercase R -> R
constexpr char UPPERCASE_S = '\x53';           // Uppercase S -> S
constexpr char UPPERCASE_T = '\x54';           // Uppercase T -> T
constexpr char UPPERCASE_U = '\x55';           // Uppercase U -> U
constexpr char UPPERCASE_V = '\x56';           // Uppercase V -> V
constexpr char UPPERCASE_W = '\x57';           // Uppercase W -> W
constexpr char UPPERCASE_X = '\x58';           // Uppercase X -> X
constexpr char UPPERCASE_Y = '\x59';           // Uppercase Y -> Y
constexpr char UPPERCASE_Z = '\x5A';           // Uppercase Z -> Z
constexpr char LEFT_SQUARE_BRACKET = '\x5B';   // Left square bracket -> [
constexpr char BACKSLASH = '\x5C';             // Backslash ->
constexpr char RIGHT_SQUARE_BRACKET = '\x5D';  // Right square bracket -> ]
constexpr char CARET = '\x5E';                 // Caret (Circumflex) -> ^
constexpr char UNDERSCORE = '\x5F';            // Underscore -> _
constexpr char GRAVE_ACCENT = '\x60';          // Grave accent (Backtick) -> `
constexpr char LOWERCASE_A = '\x61';           // Lowercase a -> a
constexpr char LOWERCASE_B = '\x62';           // Lowercase b -> b
constexpr char LOWERCASE_C = '\x63';           // Lowercase c -> c
constexpr char LOWERCASE_D = '\x64';           // Lowercase d -> d
constexpr char LOWERCASE_E = '\x65';           // Lowercase e -> e
constexpr char LOWERCASE_F = '\x66';           // Lowercase f -> f
constexpr char LOWERCASE_G = '\x67';           // Lowercase g -> g
constexpr char LOWERCASE_H = '\x68';           // Lowercase h -> h
constexpr char LOWERCASE_I = '\x69';           // Lowercase i -> i
constexpr char LOWERCASE_J = '\x6A';           // Lowercase j -> j
constexpr char LOWERCASE_K = '\x6B';           // Lowercase k -> k
constexpr char LOWERCASE_L = '\x6C';           // Lowercase l -> l
constexpr char LOWERCASE_M = '\x6D';           // Lowercase m -> m
constexpr char LOWERCASE_N = '\x6E';           // Lowercase n -> n
constexpr char LOWERCASE_O = '\x6F';           // Lowercase o -> o
constexpr char LOWERCASE_P = '\x70';           // Lowercase p -> p
constexpr char LOWERCASE_Q = '\x71';           // Lowercase q -> q
constexpr char LOWERCASE_R = '\x72';           // Lowercase r -> r
constexpr char LOWERCASE_S = '\x73';           // Lowercase s -> s
constexpr char LOWERCASE_T = '\x74';           // Lowercase t -> t
constexpr char LOWERCASE_U = '\x75';           // Lowercase u -> u
constexpr char LOWERCASE_V = '\x76';           // Lowercase v -> v
constexpr char LOWERCASE_W = '\x77';           // Lowercase w -> w
constexpr char LOWERCASE_X = '\x78';           // Lowercase x -> x
constexpr char LOWERCASE_Y = '\x79';           // Lowercase y -> y
constexpr char LOWERCASE_Z = '\x7A';           // Lowercase z -> z
constexpr char LEFT_CURLY_BRACE = '\x7B';      // Left curly brace -> {
constexpr char VERTICAL_BAR = '\x7C';          // Vertical bar (Pipe) -> |
constexpr char RIGHT_CURLY_BRACE = '\x7D';     // Right curly brace -> }
constexpr char TILDE = '\x7E';                 // Tilde -> ~
constexpr char DEL = '\x7F';                   // Delete -> DEL
}

#endif  // GLOBAL_H
