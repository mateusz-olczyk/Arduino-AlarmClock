#ifndef ALARM_PANEL_H
#define ALARM_PANEL_H

#include "Panel.h"

class AlarmPanel : public Panel {

  private:
  int tickCount;

  public:
  AlarmPanel() : Panel(50) {}
  virtual void paint() const;
  virtual void onKeyEvent(char key);
  virtual void onTickEvent();
  virtual void onEnable();

};

#endif
