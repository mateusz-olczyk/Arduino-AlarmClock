#ifndef TIME_SHOW_PANEL_H
#define TIME_SHOW_PANEL_H

#include "Panel.h"

class TimeShowPanel : public Panel {

  private:

  public:
  TimeShowPanel(PanelManager & panelManager);
  virtual void paint();
  virtual void onTickEvent();

};

#endif
