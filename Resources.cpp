#include "Resources.h"
#include "PanelManager.h"

namespace Resources {
  LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
  MD_AButton analogButton(0);
  const int BUZZER_PIN = 11;
  const int ALARM_FREQUENCY = 4600;
  PanelManager panelManager;
}

