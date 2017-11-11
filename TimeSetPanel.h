#ifndef TIME_SET_PANEL_H
#define TIME_SET_PANEL_H

#include <LiquidCrystal.h>
#include "Panel.h"
#include "Time.h"

namespace Resources {
  extern LiquidCrystal lcd;
}

class TimeSetPanel : public Panel {

  private:
  Time time;
  const char * message;
  int cursor_position = 0;
  void onLeftKeyEvent();
  void onRightKeyEvent();
  void onUpKeyEvent();
  void onDownKeyEvent();

  public:
  TimeSetPanel(const char * message) : message(message) {}
  virtual void paint();
  virtual void onKeyEvent(char key);

};

#endif
