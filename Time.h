#ifndef TIME_H
#define TIME_H

#include <LiquidCrystal.h>

namespace Resources {
  extern LiquidCrystal lcd;
}

class Time {

  private:
  int hour;
  int minute;
  int second;

  public:
  Time();
  Time(unsigned long milliseconds);
  int getHour();
  bool setHour(int hour);
  int getMinute();
  bool setMinute(int minute);
  int getSecond();
  bool setSecond(int second);
  void print(bool withSeconds);

};

#endif
