#ifndef ACTION_H
#define ACTION_H

#include "../include/arg.h"

class InsertModAction {
public:
  virtual void executeAction(InsertModArgument &arg) = 0;
};

class AddOneChar : public InsertModAction {
public:
  virtual void executeAction(InsertModArgument &arg) override;
};

class AddText : public InsertModAction {
public:
  virtual void executeAction(InsertModArgument &arg) override;
};

class RemovePrevChar : public InsertModAction {
public:
  virtual void executeAction(InsertModArgument &arg) override;
};

class RemoveNextChar : public InsertModAction {
public:
  virtual void executeAction(InsertModArgument &arg) override;
};

class SelectRightWord : public InsertModAction {
public:
  virtual void executeAction(InsertModArgument &arg) override;
};

class SelectLeftWord : public InsertModAction {
public:
  virtual void executeAction(InsertModArgument &arg) override;
};

class RemoveLine : public InsertModAction {
public:
  virtual void executeAction(InsertModArgument &arg) override;
};

class MoveCursorRight : public InsertModAction {
public:
  virtual void executeAction(InsertModArgument &arg) override;
};

class MoveCursorLeft : public InsertModAction {
public:
  virtual void executeAction(InsertModArgument &arg) override;
};

class Redo : public InsertModAction {
public:
  virtual void executeAction(InsertModArgument &arg) override;
};

#endif  // ACTION_H
