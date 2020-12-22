#include "fraction.h"
#include <gtest/gtest.h>

TEST(Fraction, Empty_Cosnstructor) {
    Fraction B1;
  EXPECT_EQ(0, B1.isSimplest());
}
TEST(Fraction, Cosnstructor) {
    Fraction B1(2,3);
    Fraction B2(3,4);
    Fraction B3;
    B3=B1+B2;
  EXPECT_EQ(1, B3.isSimplest());
}
TEST(Fraction, Cosnstructor1) {
    Fraction B1(2,10);
EXPECT_EQ(0, B1.isSimplest());
}