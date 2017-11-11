#include "Resources.h"

/*
 * Hardware required:
 * - LCD on pins rs = 8, enable = 9, d4 = 4, d5 = 5, d6 = 6, d7 = 7
 * - Analog button on pin 0 with values right = 0, up = 142, down = 329, left = 505, select = 741, none = 1023
 * - Buzzer on pin 11
 */

void setup() {
  Resources::analogButton.setRepeatTime(200);
  Resources::lcd.begin(16, 2);
  Resources::panelManager.begin();
}

void loop() {
  Resources::panelManager.handleEvents();
}
