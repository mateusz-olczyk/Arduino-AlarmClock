#ifndef PANEL_H
#define PANEL_H

#include <LiquidCrystal.h>
#include <MD_AButton.h>
#include "Time.h"

class PanelManager;

class Panel {

  private:
  unsigned long _lastTickTime;
  PanelManager & _panelManager;
  unsigned long _tickFrequency;

  protected:
  PanelManager & getPanelManager();
  void setTickFrequency(unsigned long value);

  public:
  Panel(PanelManager & panelManager);
  virtual ~Panel() {}
  virtual void paint() = 0;
  virtual void onKeyEvent(char key) {}
  virtual void onTickEvent() {}
  void handleEvents();

};

#endif
