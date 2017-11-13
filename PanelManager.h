#ifndef PANEL_MANAGER_H
#define PANEL_MANAGER_H

#include "Panel.h"
#include "CurrentTimeSetPanel.h"
#include "AlarmTimeSetPanel.h"
#include "TimeShowPanel.h"
#include "AlarmPanel.h"

class PanelManager {

  private:
  Panel * currentPanel;

  public:
  void begin();
  void handleEvents();
  void setPanel(Panel * panel);

  CurrentTimeSetPanel currentTimeSetPanel;
  AlarmTimeSetPanel alarmTimeSetPanel;
  TimeShowPanel timeShowPanel;
  AlarmPanel alarmPanel;

};

#endif
