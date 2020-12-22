#include "point.h"
#include <gtest/gtest.h>
int m_x;
  int m_y;
  
  Point::Point():m_x(0),m_y(0){}
  Point::Point(int x,int y):m_x(x),m_y(y){}
  Point::Point(const Point& ref):m_x(ref.m_x),m_y(ref.m_y){}
  double Point::distanceFromOrigin()  const
  {
      return sqrt((m_x*m_x)+(m_y*m_y));
  }
  bool Point::isOrigin() const
  {
    return ((m_x==0)&&(m_y==0));
  }
  bool Point::isOnXAxis() const
  {
    return (m_y==0);
  }
  bool Point::isOnYAxis() const
  {
    return (m_x==0);
  }
  void Point::display() const
{
  std::cout<<"("<<m_x<<","<<m_y<<")"<<"\n";
}
Quadrant Point::quadrant() const
{
  if((m_x>=0)&&(m_y>=0))
  {
    return Q1;
  }
  else if((m_x<=0)&&(m_y>=0))
  {
    return Q2;
  }
  else if((m_x<=0)&&(m_y<=0))
  {
    return Q3;
  }
  else
  {
    return Q4;
  }
  
}

int main(int argc, char **argv)
{
  Point p1(-1,2);
  Point p2;
  p1.display();
  p2.display();
  std::cout<<p1.quadrant();
      testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
  return 0;
}