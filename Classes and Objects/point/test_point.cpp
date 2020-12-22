#include "gpoint.h"
#include <gtest/gtest.h>
namespace {
TEST(Point, Empty_Cosnstructor) {
    Point B1;
  EXPECT_EQ(1, B1.isOrigin());

}

TEST(Point, Parameterized_Cosnstructor) {
    Point B1(-1,2);
  EXPECT_EQ(0, B1.isOrigin());
  EXPECT_EQ(2, B1.quadrant());
  
}

}