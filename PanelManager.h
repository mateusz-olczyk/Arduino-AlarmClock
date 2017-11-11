#ifndef PANEL_MANAGER_H
#define PANEL_MANAGER_H

#include "Panel.h"
#include "TimeSetPanel.h"
#include "TimeShowPanel.h"
#include "DebugPanel.h"

class PanelManager {

  private:
  Panel * currentPanel;

  public:
  void begin();
  void handleEvents();
  void setPanel(Panel * panel);

  TimeSetPanel timeSetPanel = TimeSetPanel("Set the time:");
  TimeShowPanel timeShowPanel;
  DebugPanel debugPanel;

};

#endif
