#include "../include/utilities.h"

#include <cstddef>
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include "../include/global.h"

#ifdef __linux__

# include <pwd.h>
# include <sys/types.h>
# include <unistd.h>

std::string get_home_dir()
{
  const uid_t uid = getuid();
  struct passwd *pwd = getpwuid(uid);

  std::string hds;
  if (pwd != nullptr) {
    const char *home_dir = pwd->pw_dir;
    hds = home_dir;
  }
  return hds;
}

#elif defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)

# include <stdlib.h>
# include <unistd.h>

std::string get_home_dir()
{
  const char *home_dir = getenv("HOME");
  if (home_dir != nullptr) {
    return home_dir;
  }
  return "";
}

#elif _WIN32
# include <cstdlib>
# include <userenv.h>
# include <windows.h>

std::string wstring_to_string(const std::wstring &w_str)
{
  std::string str;
  size_t size;
  str.resize(w_str.length());
  std::wcstombs_s(&size, &str[0], str.size() + 1, w_str.c_str(), w_str.size());
  return str;
}

std::string get_home_dir()
{
  HANDLE h_token;
  if (!OpenProcessToken(GetCurrentProcess(), TOKEN_READ, &h_token)) {
    return "";
  }

  WCHAR sz_path[MAX_PATH];
  DWORD dw_size = sizeof(sz_path) / sizeof(sz_path[0]);
  if (!GetUserProfileDirectoryW(h_token, sz_path, &dw_size)) {
    CloseHandle(h_token);
    return "";
  }

  CloseHandle(h_token);
  std::wstring w_path(sz_path);
  return wstring_to_string(w_path);
}

#endif

std::map<std::string, std::string> parse_config_file()
{
  const auto home{ get_home_dir() };
  /* Constants will be added for different platforms. */
  const std::string input_config_path{ "/.config/tuyuk/config" };

  std::map<std::string, std::string> all_conf;
  const std::string path = home + input_config_path;
  std::ifstream file(path);
  if (!file.is_open()) {
    std::cerr << "Config filne not found!\n";
    // Add log
    return all_conf;
  }
  std::string line;
  while (std::getline(file, line)) {
    if (line.empty() || line[0] == ascii::HASH) {
      continue;
    }
    const size_t eq_pos = line.find(ascii::EQUALS_SIGN);
    if (eq_pos != std::string::npos) {
      const std::string key = line.substr(0, eq_pos);
      const std::string value = line.substr(eq_pos + 1, line.length() - 1);
      all_conf[key] = value;
    }
  }
  file.close();
  return all_conf;
}
