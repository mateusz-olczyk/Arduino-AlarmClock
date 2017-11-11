#include "Time.h"
#include <Arduino.h>

Time::Time() {
  hour = minute = second = 0;
}

Time::Time(unsigned long milliseconds) {
  hour = (milliseconds / 3600000) % 24;
  minute = (milliseconds / 60000) % 60;
  second = (milliseconds / 1000) % 60;
}

int Time::getHour() {
  return hour;
}

bool Time::setHour(int hour) {
  hour = constrain(hour, 0, 23);
  if (this->hour != hour) {
    this->hour = hour;
    return true;
  }
  return false;
}

int Time::getMinute() {
  return minute;
}

bool Time::setMinute(int minute) {
  minute = constrain(minute, 0, 59);
  if (this->minute != minute) {
    this->minute = minute;
    return true;
  }
  return false;
}

int Time::getSecond() {
  return second;
}

bool Time::setSecond(int second) {
  second = constrain(second, 0, 59);
  if (this->second != second) {
    this->second = second;
    return true;
  }
  return false;
}

void Time::print(bool withSeconds) {
  Resources::lcd.print(hour/10);
  Resources::lcd.print(hour%10);
  Resources::lcd.print(":");
  Resources::lcd.print(minute/10);
  Resources::lcd.print(minute%10);
  if (withSeconds) {
    Resources::lcd.print(":");
    Resources::lcd.print(second/10);
    Resources::lcd.print(second%10);
  }
}
