#ifndef UTILITIES_H
#define UTILITIES_H

#include <map>
#include <string>

std::string get_home_dir();
std::map<std::string, std::string> parse_config_file();

#endif
