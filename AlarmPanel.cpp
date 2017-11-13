#include "AlarmPanel.h"
#include "Resources.h"

void AlarmPanel::paint() const {
  Resources::lcd.print("     ALARM!");
}

void AlarmPanel::onKeyEvent(char key) {
  if (key == 'S') {
    Resources::panelManager.timeShowPanel.noAlarm();
    Resources::panelManager.setPanel(&Resources::panelManager.timeShowPanel);
  }
}

void AlarmPanel::onTickEvent() {
  const int melody[20] = { 1, 0,-1, 1, 0,-1, 1, 0,-1, 1, 0,-1};
  if (melody[tickCount] == 1)
    tone(Resources::BUZZER_PIN, Resources::ALARM_FREQUENCY);
  else if (melody[tickCount] == -1)
    noTone(Resources::BUZZER_PIN);
  tickCount = (tickCount+1)%20;
}

void AlarmPanel::onEnable() {
  Panel::onEnable();
  tickCount = 0;
}
