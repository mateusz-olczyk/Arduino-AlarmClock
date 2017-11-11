#include "TimeShowPanel.h"
#include "Resources.h"

Time TimeShowPanel::getCurrentTime() {
  return initializedRealTime + Time((millis() - initializedArduinoTime)/1000);
}

void TimeShowPanel::paint() {
  Resources::lcd.setCursor(0,0);
  getCurrentTime().print(true);
}

void TimeShowPanel::onKeyEvent(char key) {
  if (key == 'S')
    Resources::panelManager.setPanel(&Resources::panelManager.debugPanel);
}

void TimeShowPanel::onTickEvent() {
  paint();
}

void TimeShowPanel::setTime(const Time &time) {
  initializedArduinoTime = millis();
  initializedRealTime = time;
}
