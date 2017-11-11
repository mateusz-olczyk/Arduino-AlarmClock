#ifndef DEBUG_PANEL_H
#define DEBUG_PANEL_H

#include "Panel.h"

class DebugPanel : public Panel {

  public:
  virtual void paint();
  virtual void onKeyEvent(char key);
  
};

#endif

