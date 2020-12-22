#include "circle.h"
#include "shape.h"
#include <gtest/gtest.h>

TEST(Circle, Empty_Cosnstructor) {
    Circle B1;
  EXPECT_EQ(3, (int)B1.area());
}
TEST(Circle, Cosnstructor) {
    Circle B1;
  EXPECT_EQ(6, (int)B1.circumference());
}