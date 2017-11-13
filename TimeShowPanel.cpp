#include "TimeShowPanel.h"
#include "Resources.h"

Time TimeShowPanel::getCurrentTime() const {
  return initializedRealTime + Time((millis() - initializedArduinoTime)/1000);
}

void TimeShowPanel::paint() const {
  Resources::lcd.setCursor(4, 0);
  getCurrentTime().print(true);
  if (alarmEnabled) {
    Resources::lcd.setCursor(0, 1);
    Resources::lcd.print("  alarm:");
    Resources::lcd.setCursor(9, 1);
    alarmTime.print(false);
  }
}

void TimeShowPanel::onKeyEvent(char key) {
  if (key == 'S')
    Resources::panelManager.setPanel(&Resources::panelManager.alarmTimeSetPanel);
}

void TimeShowPanel::onTickEvent() {
  paint();
  if (alarmEnabled && getCurrentTime() == alarmTime)
    Resources::panelManager.setPanel(&Resources::panelManager.alarmPanel);
}

void TimeShowPanel::setTime(const Time &time) {
  initializedArduinoTime = millis();
  initializedRealTime = time;
}

void TimeShowPanel::setAlarmTime(const Time & time) {
  alarmEnabled = true;
  alarmTime = time;
}
