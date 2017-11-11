#ifndef TIME_H
#define TIME_H

class Time {

  private:
  unsigned long seconds = 0;

  public:
  int getHour();
  void setHour(int hour);
  int getMinute();
  void setMinute(int minute);
  int getSecond();
  void setSecond(int second);
  Time & operator++();
  void print(bool withSeconds);

};

#endif
