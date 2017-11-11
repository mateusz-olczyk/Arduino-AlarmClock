#ifndef PANEL_H
#define PANEL_H

class Panel {

private:
  unsigned long lastTickTime;
  unsigned long tickInterval;

public:
  Panel(unsigned long tickInterval = 0) : tickInterval(tickInterval) {}
  virtual void paint() = 0;
  virtual void onKeyEvent(char key) {}
  virtual void onTickEvent() {}
  void onEnable();
  void handleEvents();

};

#endif
