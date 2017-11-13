#include "AlarmTimeSetPanel.h"
#include "Resources.h"

void AlarmTimeSetPanel::onSelectKeyEvent() {
  Resources::panelManager.timeShowPanel.setAlarmTime(getTime());
  Resources::panelManager.setPanel(&Resources::panelManager.timeShowPanel);
}
