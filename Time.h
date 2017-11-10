#ifndef TIME_H
#define TIME_H

#include <LiquidCrystal.h>

class Time {

  private:
  int _hour;
  int _minute;
  int _second;

  public:
  Time();
  Time(unsigned long milliseconds);
  int getHour();
  bool setHour(int hour);
  int getMinute();
  bool setMinute(int minute);
  int getSecond();
  bool setSecond(int second);
  void print(LiquidCrystal & lcd, bool withSeconds);
  
};

#endif
