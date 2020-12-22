#ifndef __ISHAPE_H
#define __ISHAPE_H
#include<iostream>

class IShape {
  protected:
  int m_s;
  public:
  IShape():m_s(0){}
  IShape(int s1):m_s(s1){}
  virtual double area()=0;
  virtual double circumference()=0;
};

#endif
