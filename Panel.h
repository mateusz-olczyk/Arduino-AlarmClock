#ifndef PANEL_H
#define PANEL_H

#include <MD_AButton.h>

namespace Resources {
  extern MD_AButton analogButton;
}

class Panel {

private:
  unsigned long lastTickTime;

protected:
  unsigned long tickInterval = 0;
  
public:
  virtual void paint() = 0;
  virtual void onKeyEvent(char key) {}
  virtual void onTickEvent() {}
  void onEnable();
  void handleEvents();

};

#endif
