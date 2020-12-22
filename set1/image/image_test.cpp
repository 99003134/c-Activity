#include "image.h"
#include <gtest/gtest.h>

TEST(Image,Empty_Cosnstructor) {
    Image I1;
    EXPECT_EQ(0, I1.getx());

}

TEST(Point,Parameterized_Cosnstructor) {
    Image I1(128,128,720,720);
    EXPECT_EQ(128, I1.getx());
}


