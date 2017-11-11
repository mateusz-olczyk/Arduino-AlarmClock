#ifndef TIME_SET_PANEL_H
#define TIME_SET_PANEL_H

#include "Panel.h"
#include "Time.h"

class TimeSetPanel : public Panel {

  private:
  Time time;
  const char * message;
  int cursor_position = 0;
  void onLeftKeyEvent();
  void onRightKeyEvent();
  void onUpDownKeyEvent(char key);

  public:
  TimeSetPanel(const char * message) : message(message) {}
  virtual void paint();
  virtual void onKeyEvent(char key);

};

#endif
