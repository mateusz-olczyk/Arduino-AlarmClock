#ifndef DEBUG_PANEL_H
#define DEBUG_PANEL_H

#include "Panel.h"

class DebugPanel : public Panel {

  private:
  int tickCount;

  public:
  DebugPanel() : Panel(50) {}
  virtual void paint();
  virtual void onKeyEvent(char key);
  virtual void onTickEvent();
  virtual void onEnable();

};

#endif
