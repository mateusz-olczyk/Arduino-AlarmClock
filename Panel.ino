Panel::Panel(PanelManager & panelManager)
: _panelManager(panelManager), _tickFrequency(0) {}

void Panel::handleEvents() {
  unsigned long newTickTime = millis();
  if (_tickFrequency != 0)
    while (newTickTime - _lastTickTime > _tickFrequency) {
      onTickEvent();
      _lastTickTime += _tickFrequency;
    }
  char key = _panelManager.getAnalogButton().getKey();
  if (key != KEY_NONE)
    onKeyEvent(key);
}

PanelManager & Panel::getPanelManager() {
  return _panelManager;
}

void Panel::setTickFrequency(unsigned long value) {
  _tickFrequency = value;
  _lastTickTime = millis();
}

