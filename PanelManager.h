#ifndef PANEL_MANAGER_H
#define PANEL_MANAGER_H

#include "Panel.h"
#include "TimeInitPanel.h"
#include "TimeShowPanel.h"

class PanelManager {

  private:
  LiquidCrystal _lcd;
  MD_AButton _analogButton;
  
  // Panels:
  TimeInitPanel _timeInitPanel = TimeInitPanel(*this);
  TimeShowPanel _timeShowPanel = TimeShowPanel(*this);
  
  Panel * _currentPanel;

  public:
  enum PanelName {INIT, SHOW};
  void switchPanel(PanelName name);
  PanelManager();
  LiquidCrystal & getLcd();
  MD_AButton & getAnalogButton();
  void begin();
  void run();

};

#endif
