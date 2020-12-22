#ifndef __FRACTION_H
#define __FRACTION_H

#include<string>
#include<iostream>
#include<cmath>
#include<bits/stdc++.h>

class Fraction {
  int m_numerator;
  int m_denominator;
  public:
  Fraction();
  Fraction(int,int);
  Fraction(int);
  Fraction operator+(const Fraction&);
  Fraction operator-(const Fraction&);
  //Fraction operator*(const Fraction&);
  Fraction operator+(int);
  Fraction operator-(int);
  bool operator==(const Fraction&);
  bool operator<(const Fraction&);
  bool operator>(const Fraction&);
  Fraction simplify();
  bool isSimplest() const;
  void dispay() const;
  friend std::ostream& operator<<(std::ostream&, const Fraction&);
};

#endif