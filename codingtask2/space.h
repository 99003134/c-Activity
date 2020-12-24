#ifndef __SPACE_H
#define __SPACE_H
#include"point.h"
#include<vector>
class Space{
  std::vector<Point> Space2d;
  public:
  void addPoint(int,int);
  void displayall();
  int countbyquad(int);
  int countoncircle(double );
  Point* findonquad(int );
  Point* findoncircle(double );
  int countincircle(double );
  //int count() { return books.size(); }
  //sortByTitle, sortByAuthor
  //MinPriceReleased in an year
};
#endif


