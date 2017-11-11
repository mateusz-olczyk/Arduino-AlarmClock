#include "TimeSetPanel.h"

void TimeSetPanel::paint() {
  Resources::lcd.clear();
  Resources::lcd.noCursor();
  Resources::lcd.print(message);
  Resources::lcd.setCursor(0, 1);
  time.print(false);
  Resources::lcd.cursor();
  Resources::lcd.setCursor(cursor_position, 1);
}

void TimeSetPanel::onKeyEvent(char key) {
  switch (key) {
    case 'U':
    onUpKeyEvent();
    break;
    case 'D':
    onDownKeyEvent();
    break;
    case 'L':
    onLeftKeyEvent();
    break;
    case 'R':
    onRightKeyEvent();
    break;
  }
}

void TimeSetPanel::onUpKeyEvent() {
  switch (cursor_position) {
    case 0:
    if(time.setHour(time.getHour()+10))
      paint();
    break;
    case 1:
    if(time.setHour(time.getHour()+1))
      paint();
    break;
    case 3:
    if(time.setMinute(time.getMinute()+10))
      paint();
    break;
    case 4:
    if (time.setMinute(time.getMinute()+1))
      paint();
    break;
  }
}

void TimeSetPanel::onDownKeyEvent() {
    switch (cursor_position) {
    case 0:
    if (time.setHour(time.getHour()-10))
      paint();
    break;
    case 1:
    if (time.setHour(time.getHour()-1))
      paint();
    break;
    case 3:
    if(time.setMinute(time.getMinute()-10))
      paint();
    break;
    case 4:
    if(time.setMinute(time.getMinute()-1))
      paint();
    break;
  }
}

void TimeSetPanel::onLeftKeyEvent() {
  if (cursor_position == 1 || cursor_position == 4) {
    cursor_position -= 1;
    paint();
  } else if (cursor_position == 3) {
    cursor_position -= 2;
    paint();
  }
}

void TimeSetPanel::onRightKeyEvent() {
  if (cursor_position == 0 || cursor_position == 3) {
    cursor_position += 1;
   paint();
  } else if (cursor_position == 1) {
    cursor_position += 2;
    paint();
  }
}
