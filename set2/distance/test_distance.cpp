#include "distance.h"
#include <gtest/gtest.h>

TEST(Distance, Empty_Cosnstructor) {
    Distance B1;
  EXPECT_EQ(0, B1.getFeet());
  EXPECT_EQ(0, B1.getInch());
 
}
TEST(Distance, Cosnstructor) {
    Distance B1(2,3);
    Distance B2(3,4);
    Distance B3;
    B3=B1+B2;
  EXPECT_EQ(5, B3.getFeet());
  EXPECT_EQ(7, B3.getInch());
}
