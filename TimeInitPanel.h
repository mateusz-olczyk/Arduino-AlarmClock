#ifndef TIME_INIT_PANEL_H
#define TIME_INIT_PANEL_H

#include "Panel.h"

class TimeInitPanel : public Panel {

  private:
  Time _time;
  int _cursor_position;
  void _onLeftKeyEvent();
  void _onRightKeyEvent();
  void _onUpKeyEvent();
  void _onDownKeyEvent();

  public:
  TimeInitPanel(PanelManager & panelManager);
  virtual void paint();
  virtual void onKeyEvent(char key);

};

#endif
