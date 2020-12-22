#include "gpoint.h"
#include <gtest/gtest.h>
namespace {
   
TEST(Point, Empty_Cosnstructor) {
    Point<int> B1(1,2);
  EXPECT_EQ(1, B1.quadrant());

}

TEST(Point, Parameterized_Cosnstructor) {
    Point<int> B1(-1,2);
  EXPECT_EQ(2, B1.quadrant());
  
}

}