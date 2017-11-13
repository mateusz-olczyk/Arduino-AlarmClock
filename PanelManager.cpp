#include "PanelManager.h"
#include "Resources.h"

void PanelManager::begin() {
  setPanel(&Resources::panelManager.currentTimeSetPanel);
}

void PanelManager::handleEvents() {
  currentPanel->handleEvents();
}

void PanelManager::setPanel(Panel * panel) {
  currentPanel = panel;
  currentPanel->onEnable();
}
