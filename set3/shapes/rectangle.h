#ifndef __RECTANGLE_H
#define __RECTANGLE_H

#include "polygon.h"
#include <gtest/gtest.h>

class Rectangle : public Polygon {
  int  m_length;
  int  m_breadth;

public:
  Rectangle(int l,int b):m_length(l),m_breadth(b){}
  double area()
  {
    return (m_length*m_breadth);
  }
  double circumference()
  {
    return ((2*m_length)+(2*m_breadth));
  }
};

#endif

int main(int argc, char **argv)
{
  Rectangle c1(1,2);
  std::cout<<"circumference"<<c1.circumference()<<"\n";
  std::cout<<"area"<<c1.area()<<"\n";
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
  return 0;
}