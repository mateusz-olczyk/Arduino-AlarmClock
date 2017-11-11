#ifndef PANEL_SELECTOR_H
#define PANEL_SELECTOR_H

#include "Panel.h"

class PanelSelector {

  private:
  Panel * currentPanel;

  public:
  void begin();
  void handleEvents();
  void setPanel(Panel * panel);

};

#endif
