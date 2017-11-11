#include "TimeShowPanel.h"

void TimeShowPanel::paint() {
  Resources::lcd.setCursor(0,0);
  time.print(true);
}

void TimeShowPanel::onTickEvent() {
  ++time;
  paint();
}
