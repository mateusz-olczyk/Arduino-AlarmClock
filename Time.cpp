#include "Time.h"
#include <Arduino.h>

int Time::getHour() {
  return seconds / 3600;
}

void Time::setHour(int hour) {
  seconds = seconds - getHour()*3600l + constrain(hour, 0, 23)*3600l;
}

int Time::getMinute() {
  return (seconds / 60) % 60;
}

void Time::setMinute(int minute) {
  seconds = seconds - getMinute()*60 + constrain(minute, 0, 59)*60;
}

int Time::getSecond() {
  return seconds % 60;
}

void Time::setSecond(int second) {
  seconds = seconds - getSecond() + constrain(second, 0, 59);
}

Time & Time::operator++() {
  if (++seconds == 86400)
    seconds = 0;
  return *this;
}

void Time::print(bool withSeconds) {
  Resources::lcd.print(getHour()/10);
  Resources::lcd.print(getHour()%10);
  Resources::lcd.print(":");
  Resources::lcd.print(getMinute()/10);
  Resources::lcd.print(getMinute()%10);
  if (withSeconds) {
    Resources::lcd.print(":");
    Resources::lcd.print(getSecond()/10);
    Resources::lcd.print(getSecond()%10);
  }
}
