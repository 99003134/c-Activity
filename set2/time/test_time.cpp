#include "time.h"
#include <gtest/gtest.h>

TEST(MyTime, Empty_Cosnstructor) {
    MyTime B1;
  EXPECT_EQ(0, B1.gethrs());
  
 
}
TEST(MyTime, Cosnstructor) {
    MyTime B1(3,29,30);
  EXPECT_EQ(3, B1.gethrs());
}