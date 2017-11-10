#include "TimeShowPanel.h"

TimeShowPanel::TimeShowPanel(PanelManager & panelManager) : Panel(panelManager) {
  setTickFrequency(1000);
}

void TimeShowPanel::paint() {
  getPanelManager().getLcd().noCursor();
  getPanelManager().getLcd().clear();
  getPanelManager().getLcd().print(":)");
}

void TimeShowPanel::onTickEvent() {
  tone(11, 4600, 150);
}

