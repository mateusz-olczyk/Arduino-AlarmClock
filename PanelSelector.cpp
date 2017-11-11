#include "PanelSelector.h"
#include "TimeSetPanel.h"

namespace Resources {
  namespace Panels {
    extern TimeSetPanel timeSetPanel;
  }
}

void PanelSelector::begin() {
  setPanel(&Resources::Panels::timeSetPanel);
}

void PanelSelector::handleEvents() {
  currentPanel->handleEvents();
}

void PanelSelector::setPanel(Panel * panel) {
  currentPanel = panel;
  currentPanel->onEnable();
}
