#ifndef __COLOR_H
#define __COLOR_H

typedef enum {
  RED=0xFF0000,
  GREEN=0x00FF00,
  BLUE=0x0000FF,
  WHITE=0xFFFFFF,
  BLACK=0x0

}colour_t;

class Colour {
  int m_r;
  int m_g;
  int m_b;
  public:
  Colour();
  Colour(int,int,int);       
  Colour(int);                  
  void invert();
  void display() const;
   int getr();

};

#endif

