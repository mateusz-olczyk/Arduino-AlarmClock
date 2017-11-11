#ifndef TIME_SET_PANEL_H
#define TIME_SET_PANEL_H

#include <LiquidCrystal.h>
#include "Panel.h"
#include "TimeShowPanel.h"
#include "PanelSelector.h"
#include "Time.h"

namespace Resources {
  extern LiquidCrystal lcd;
  namespace Panels {
    extern TimeShowPanel timeShowPanel;
    extern PanelSelector panelSelector;
  }
}

class TimeSetPanel : public Panel {

  private:
  Time time;
  const char * message;
  int cursor_position = 0;
  void onLeftKeyEvent();
  void onRightKeyEvent();
  void onUpDownKeyEvent(char key);

  public:
  TimeSetPanel(const char * message) : message(message) {}
  virtual void paint();
  virtual void onKeyEvent(char key);

};

#endif
