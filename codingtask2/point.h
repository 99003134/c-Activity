#ifndef __POINT_H
#define __POINT_H
#include <iostream>
class Point {
  public:
  int m_x;
  int m_y;
  //int m_height;
  public:
  Point();
  Point(int,int);
  Point(int);
  Point(const Point&);
  //~Point();
  double distance( );
  Point fliph(const Point& );
  Point flipv(const Point& );
  Point displacex(const Point& ,int);
  Point displacey(const Point& ,int);
  void display();
};

#endif