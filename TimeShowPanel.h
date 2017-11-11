#ifndef TIME_SHOW_PANEL_H
#define TIME_SHOW_PANEL_H

#include <LiquidCrystal.h>
#include "Panel.h"
#include "Time.h"

namespace Resources {
  extern LiquidCrystal lcd;
}

class TimeShowPanel : public Panel {

  private:
  Time time;

  public:
  TimeShowPanel() : Panel(1000) {}
  virtual void paint();
  virtual void onTickEvent();
  void setTime(const Time &time);

};

#endif
