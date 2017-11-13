#ifndef ALARM_TIME_SET_PANEL_H
#define ALARM_TIME_SET_PANEL_H

#include "TimeSetPanel.h"

class AlarmTimeSetPanel : public TimeSetPanel {

  public:
  AlarmTimeSetPanel() : TimeSetPanel("Set alarm time:") {}
  virtual void onSelectKeyEvent();

};

#endif
