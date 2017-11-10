#include "Time.h"

Time::Time() {
  _hour = _minute = _second = 0;
}

Time::Time(unsigned long milliseconds) {
  _hour = (milliseconds / 3600000) % 24;
  _minute = (milliseconds / 60000) % 60;
  _second = (milliseconds / 1000) % 60;
}

int Time::getHour() {
  return _hour;
}

bool Time::setHour(int hour) {
  hour = constrain(hour, 0, 23);
  if (_hour != hour) {
    _hour = hour;
    return true;
  }
  return false;
}

int Time::getMinute() {
  return _minute;
}

bool Time::setMinute(int minute) {
  minute = constrain(minute, 0, 59);
  if (_minute != minute) {
    _minute = minute;
    return true;
  }
  return false;
}

int Time::getSecond() {
  return _second;
}

bool Time::setSecond(int second) {
  second = constrain(second, 0, 59);
  if (_second != second) {
    _second = second;
    return true;
  }
  return false;
}

void Time::print(LiquidCrystal & lcd, bool withSeconds) {
  lcd.print(_hour/10);
  lcd.print(_hour%10);
  lcd.print(":");
  lcd.print(_minute/10);
  lcd.print(_minute%10);
  if (withSeconds) {
    lcd.print(":");
    lcd.print(_second/10);
    lcd.print(_second%10);
  }
}
