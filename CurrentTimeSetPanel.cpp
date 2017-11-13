#include "CurrentTimeSetPanel.h"
#include "Resources.h"

void CurrentTimeSetPanel::onSelectKeyEvent() {
  Resources::panelManager.timeShowPanel.setTime(getTime());
  Resources::panelManager.setPanel(&Resources::panelManager.timeShowPanel);
}
