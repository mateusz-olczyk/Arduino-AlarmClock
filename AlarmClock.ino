/*
 * Hardware Required:
 * - LCD Shield with analog button on pin 0
 * - Buzzer on pin 11
 */
 
//const int buzzerPIN = 11;
//const int alarmFrequency = 4600;
#include "PanelManager.h"
PanelManager panelManager;

void setup() {
  panelManager.begin();
}

void loop() {
  panelManager.run();
}
