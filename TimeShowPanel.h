#ifndef TIME_SHOW_PANEL_H
#define TIME_SHOW_PANEL_H

#include "Panel.h"
#include "Time.h"

class TimeShowPanel : public Panel {

  private:
  Time initializedRealTime;
  unsigned long initializedArduinoTime;
  Time alarmTime;
  bool alarmEnabled = false;
  Time getCurrentTime() const;

  public:
  TimeShowPanel() : Panel(500) {}
  virtual void paint() const;
  virtual void onKeyEvent(char key);
  virtual void onTickEvent();
  void setTime(const Time & time);
  void setAlarmTime(const Time & time);
  void noAlarm() {alarmEnabled = false;}

};

#endif
