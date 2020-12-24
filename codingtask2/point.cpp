
#include "point.h"
#include<cmath>

  Point::Point():m_x(0),m_y(0){

  }
  Point::Point(int a,int b):m_x(a),m_y(b){

  }
  Point::Point(int a):m_x(a),m_y(a){

  }
  Point::Point(const Point& ref):m_x(ref.m_x),m_y(ref.m_y){

  }
  
  double Point:: distance() {
     return sqrt(m_x*m_x+m_y*m_y);
  }
  Point Point:: fliph(const Point& p){
      return Point(p.m_x,-p.m_y);
  }
  Point Point::flipv(const Point& p){
       return Point(-p.m_x,p.m_y);
  }
  Point Point::displacex(const Point& p,int a){
          return Point(p.m_x+a,p.m_y);
  }
  Point Point::displacey(const Point& p,int a){
       return Point(p.m_x,p.m_y+a);

  }
  void Point::display(){
      std::cout<<"("<<m_x<<","<<m_y<<")"<<"\n";
  }
  

