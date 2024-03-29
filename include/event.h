#ifndef EVENT_H
#define EVENT_H
#include <map>
#include <memory>
#include "../include/action.h"

class Event {
private:
  std::map<char, std::shared_ptr<InsertModAction> > actions;

public:
  void InitializeConfig();
  void Start();
};

#endif  // EVENT_H
