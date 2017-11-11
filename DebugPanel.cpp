#include "DebugPanel.h"
#include "Resources.h"

void DebugPanel::paint() {
  Resources::lcd.print("Test message :)");
}

void DebugPanel::onKeyEvent(char key) {
  if (key == 'S')
    Resources::panelManager.setPanel(&Resources::panelManager.timeShowPanel);
}

void DebugPanel::onTickEvent() {
  switch (tickCount) {
    case 0: case 3: case 6: case 9:
    tone(Resources::BUZZER_PIN, Resources::ALARM_FREQUENCY);
    break;
    case 2: case 5: case 8: case 11:
    noTone(Resources::BUZZER_PIN);
    break;
  }
  tickCount = (tickCount+1)%20;
}

void DebugPanel::onEnable() {
  Panel::onEnable();
  tickCount = 0;
}
