#include "Panel.h"
#include <Arduino.h>
#include "Resources.h"

void Panel::handleEvents() {
  unsigned long newTickTime = millis();
  if (tickInterval != 0)
    while (newTickTime - lastTickTime > tickInterval) {
      onTickEvent();
      lastTickTime += tickInterval;
    }
  char key = Resources::analogButton.getKey();
  if (key != KEY_NONE)
    onKeyEvent(key);
}

void Panel::onEnable() {
  lastTickTime = millis();
  Resources::lcd.clear();
  Resources::lcd.noCursor();
  noTone(Resources::BUZZER_PIN);
  paint();
}
