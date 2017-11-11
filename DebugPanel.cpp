#include "DebugPanel.h"
#include "Resources.h"

void DebugPanel::paint() {
  Resources::lcd.print("Test message :)");
}

void DebugPanel::onKeyEvent(char key) {
  if (key == 'S')
    Resources::panelManager.setPanel(&Resources::panelManager.timeShowPanel);
}

