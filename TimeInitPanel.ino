#include "TimeInitPanel.h"

TimeInitPanel::TimeInitPanel(PanelManager & panelManager) : Panel(panelManager), _cursor_position(0) {}

void TimeInitPanel::paint() {
  getPanelManager().getLcd().clear();
  getPanelManager().getLcd().print("Set the time:");
  getPanelManager().getLcd().setCursor(0, 1);
  _time.print(getPanelManager().getLcd(), false);
  getPanelManager().getLcd().cursor();
  getPanelManager().getLcd().setCursor(_cursor_position, 1);
}

void TimeInitPanel::onKeyEvent(char key) {
  switch (key) {
    case 'U':
    _onUpKeyEvent();
    break;
    case 'D':
    _onDownKeyEvent();
    break;
    case 'L':
    _onLeftKeyEvent();
    break;
    case 'R':
    _onRightKeyEvent();
    break;
    case 'S':
    getPanelManager().switchPanel(PanelManager::SHOW);
    break;
  }
}

void TimeInitPanel::_onUpKeyEvent() {
  switch (_cursor_position) {
    case 0:
    if(_time.setHour(_time.getHour()+10))
      paint();
    break;
    case 1:
    if(_time.setHour(_time.getHour()+1))
      paint();
    break;
    case 3:
    if(_time.setMinute(_time.getMinute()+10))
      paint();
    break;
    case 4:
    if (_time.setMinute(_time.getMinute()+1))
      paint();
    break;
  }
}

void TimeInitPanel::_onDownKeyEvent() {
    switch (_cursor_position) {
    case 0:
    if (_time.setHour(_time.getHour()-10))
      paint();
    break;
    case 1:
    if (_time.setHour(_time.getHour()-1))
      paint();
    break;
    case 3:
    if(_time.setMinute(_time.getMinute()-10))
      paint();
    break;
    case 4:
    if(_time.setMinute(_time.getMinute()-1))
      paint();
    break;
  }
}

void TimeInitPanel::_onLeftKeyEvent() {
  if (_cursor_position == 1 || _cursor_position == 4) {
    _cursor_position -= 1;
    paint();
  } else if (_cursor_position == 3) {
    _cursor_position -= 2;
    paint();
  }
}

void TimeInitPanel::_onRightKeyEvent() {
  if (_cursor_position == 0 || _cursor_position == 3) {
    _cursor_position += 1;
   paint();
  } else if (_cursor_position == 1) {
    _cursor_position += 2;
    paint();
  }
}
