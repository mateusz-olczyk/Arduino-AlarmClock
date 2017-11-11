#include "TimeSetPanel.h"

void TimeSetPanel::paint() {
  Resources::lcd.noCursor();
  Resources::lcd.setCursor(0, 0);
  Resources::lcd.print(message);
  Resources::lcd.setCursor(0, 1);
  time.print(false);
  Resources::lcd.cursor();
  Resources::lcd.setCursor(cursor_position, 1);
}

void TimeSetPanel::onKeyEvent(char key) {
  switch (key) {
    case 'U': case 'D':
    onUpDownKeyEvent(key);
    break;
    case 'L':
    onLeftKeyEvent();
    break;
    case 'R':
    onRightKeyEvent();
    break;
  }
}

void TimeSetPanel::onUpDownKeyEvent(char key) {
  int direction = key == 'U' ? 1 : -1;
  switch (cursor_position) {
    case 0:
    time.setHour(time.getHour() + direction*10);
    break;
    case 1:
    time.setHour(time.getHour() + direction);
    break;
    case 3:
    time.setMinute(time.getMinute() + direction*10);
    break;
    case 4:
    time.setMinute(time.getMinute() + direction);
    break;
  }
  paint();
}

void TimeSetPanel::onLeftKeyEvent() {
  if (cursor_position == 1 || cursor_position == 4)
    cursor_position -= 1;
  else if (cursor_position == 3)
    cursor_position -= 2;
  paint();
}

void TimeSetPanel::onRightKeyEvent() {
  if (cursor_position == 0 || cursor_position == 3)
    cursor_position += 1;
  else if (cursor_position == 1)
    cursor_position += 2;
  paint();
}
