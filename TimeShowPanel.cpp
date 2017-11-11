#include "TimeShowPanel.h"

void TimeShowPanel::paint() {
  Resources::lcd.clear();
  Resources::lcd.noCursor();
  time.print(true);
}

void TimeShowPanel::onTickEvent() {
  time.setSecond(time.getSecond()+1);
  paint();
}
