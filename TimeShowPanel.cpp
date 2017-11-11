#include "TimeShowPanel.h"
#include "Resources.h"

void TimeShowPanel::paint() {
  Resources::lcd.setCursor(0,0);
  time.print(true);
}

void TimeShowPanel::onTickEvent() {
  ++time;
  paint();
}

void TimeShowPanel::setTime(const Time &time) {
  this->time = time;
}
