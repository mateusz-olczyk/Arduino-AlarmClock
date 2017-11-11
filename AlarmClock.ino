#include <LiquidCrystal.h>
#include <MD_AButton.h>
#include "TimeShowPanel.h"

/*
 * Hardware required:
 * - LCD on pins rs = 8, enable = 9, d4 = 4, d5 = 5, d6 = 6, d7 = 7
 * - Analog button on pin 0 with values right = 0, up = 142, down = 329, left = 505, select = 741, none = 1023
 * - Buzzer on pin 11
 */

namespace Resources {
  LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
  MD_AButton analogButton(0);
  const int BUZZER_PIN = 11;
  const int ALARM_FREQUENCY = 4600;
//  TimeSetPanel panel("Set the time:");
  TimeShowPanel panel;
}

void setup() {
  Resources::analogButton.setRepeatTime(200);
  Resources::lcd.begin(16, 2);
  Resources::panel.onEnable();
}

void loop() {
  Resources::panel.handleEvents();
}
