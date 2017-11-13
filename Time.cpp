#include "Time.h"
#include "Resources.h"
#include <Arduino.h>

Time::Time(unsigned long seconds) : seconds(seconds%86400) {}

int Time::getHour() const {
  return seconds / 3600;
}

void Time::setHour(int hour) {
  seconds = seconds - getHour()*3600l + constrain(hour, 0, 23)*3600l;
}

int Time::getMinute() const {
  return (seconds / 60) % 60;
}

void Time::setMinute(int minute) {
  seconds = seconds - getMinute()*60 + constrain(minute, 0, 59)*60;
}

int Time::getSecond() const {
  return seconds % 60;
}

void Time::setSecond(int second) {
  seconds = seconds - getSecond() + constrain(second, 0, 59);
}

Time Time::operator+(const Time & time) const {
  return Time(seconds + time.seconds);
}

bool Time::operator==(const Time & time) const {
  return seconds == time.seconds;
}

void Time::print(bool withSeconds) const {
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
