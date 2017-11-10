#include "PanelManager.h"

PanelManager::PanelManager()
: _lcd(8, 9, 4, 5, 6, 7), _analogButton(0), _currentPanel(&_timeInitPanel) {}

LiquidCrystal & PanelManager::getLcd() {
  return _lcd;
}

MD_AButton & PanelManager::getAnalogButton() {
  return _analogButton;
}

void PanelManager::begin() {
  _analogButton.setRepeatTime(200);
  _lcd.begin(16, 2);
  _currentPanel->paint();
}

void PanelManager::run() {
  _currentPanel->handleEvents();
}

void PanelManager::switchPanel(PanelName name) {
  switch (name) {
    case INIT:
    _currentPanel = &_timeInitPanel;
    break;
    case SHOW:
    _currentPanel = &_timeShowPanel;
    break;
  }
  _currentPanel->paint();
}

