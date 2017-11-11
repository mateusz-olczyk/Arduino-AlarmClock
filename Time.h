#ifndef TIME_H
#define TIME_H

class Time {

  private:
  unsigned long seconds;

  public:
  Time(unsigned long seconds = 0);
  int getHour() const;
  void setHour(int hour);
  int getMinute() const;
  void setMinute(int minute);
  int getSecond() const;
  void setSecond(int second);
  Time operator+(const Time & time) const;
  void print(bool withSeconds) const;

};

#endif
