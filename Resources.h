#ifndef RESOURCES_H
#define RESOURCES_H

#include <LiquidCrystal.h>
#include <MD_AButton.h>
#include "PanelManager.h"

namespace Resources {
  extern LiquidCrystal lcd;
  extern MD_AButton analogButton;
  extern const int BUZZER_PIN;
  extern const int ALARM_FREQUENCY;
  extern PanelManager panelManager;
}

#endif
