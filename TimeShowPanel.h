#ifndef TIME_SET_PANEL_H
#define TIME_SET_PANEL_H

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
  TimeShowPanel();
  virtual void paint();
  virtual void onTickEvent();

};

#endif
