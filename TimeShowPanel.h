#ifndef TIME_SHOW_PANEL_H
#define TIME_SHOW_PANEL_H

#include "Panel.h"
#include "Time.h"

class TimeShowPanel : public Panel {

  private:
  Time initializedRealTime;
  unsigned long initializedArduinoTime;
  Time getCurrentTime();

  public:
  TimeShowPanel() : Panel(500) {}
  virtual void paint();
  virtual void onKeyEvent(char key);
  virtual void onTickEvent();
  void setTime(const Time &time);

};

#endif
