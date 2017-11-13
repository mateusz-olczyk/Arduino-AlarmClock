#ifndef CURRENT_TIME_SET_PANEL_H
#define CURRENT_TIME_SET_PANEL_H

#include "TimeSetPanel.h"

class CurrentTimeSetPanel : public TimeSetPanel {

  public:
  CurrentTimeSetPanel() : TimeSetPanel("Set the time:") {}
  virtual void onSelectKeyEvent();

};

#endif
