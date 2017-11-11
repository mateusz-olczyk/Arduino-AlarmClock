#include "PanelManager.h"
#include "Resources.h"

void PanelManager::begin() {
  setPanel(&Resources::panelManager.timeSetPanel);
}

void PanelManager::handleEvents() {
  currentPanel->handleEvents();
}

void PanelManager::setPanel(Panel * panel) {
  currentPanel = panel;
  currentPanel->onEnable();
}
