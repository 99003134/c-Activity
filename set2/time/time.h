#ifndef __MYTIME_H
#define __MYTIME_H

#include<string>
#include<iostream>

class MyTime {
  int m_hours;
  int m_minutes;
  int m_seconds;
  public:
  MyTime();
  MyTime(int,int,int);
  MyTime operator+(const MyTime&);
  MyTime operator+(int);
  MyTime& operator++();
  MyTime operator++(int);
  bool operator==(const MyTime&);
  void dispay() const;
  int gethrs() const;
  
};

#endif