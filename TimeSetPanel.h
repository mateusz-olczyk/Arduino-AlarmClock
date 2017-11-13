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
  const Time & getTime() const {return time;}
  virtual void paint() const;
  virtual void onKeyEvent(char key);
  virtual void onSelectKeyEvent() = 0;

};

#endif
