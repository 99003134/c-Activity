#ifndef __COMPLEX_H
#define __COMPLEX_H
#include<iostream>
class Complex {
  int m_real;
  int m_imag;
  public:
  Complex();
  Complex(int,int);
  Complex(int);
  Complex operator+(const Complex&);
  Complex operator-(const Complex&);
  Complex operator*(const Complex&);
  Complex& operator++();
  Complex operator++(int);
  void dispay() const;
  bool operator==(const Complex&);
  
  friend std::ostream& operator<<(std::ostream&, const Complex&);
  
  int get_real();
  int get_img();
};

#endif
