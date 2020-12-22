#include "complex.h"
#include <gtest/gtest.h>
namespace {
TEST(Complex, EmptyConnstructor) {
    Complex C1(1,2);
    Complex C2(3,4);
    Complex C3(C1 + C2);
  EXPECT_EQ(4, C3.get_real());
  EXPECT_EQ(6, C3.get_img());
}

TEST(Complex, Preincremet) 
{
    Complex C1(1,2);
    Complex& C3 = ++C1;

  EXPECT_EQ(2, C3.get_real());
  EXPECT_EQ(3, C3.get_img());
}

TEST(Complex, Postincremet) 
{
    Complex C1(1,2);
    Complex C3 = C1++;

  EXPECT_EQ(1, C3.get_real());
  EXPECT_EQ(2, C3.get_img());
}

TEST(Complex, Equality) 
{
    Complex C1(1,2);
    Complex C2(1,2);
    std::cout << "C3 == C1 is :" << (C1 == C2);

  EXPECT_EQ(1, (C1 == C2));
}

TEST(Complex, Ostream) 
{
    Complex C1(1,2);
    Complex C2(1,2);
    std::cout <<"C1 = "<<C1 << "\nC2 = " << C2;
}
}