#include "colour.h"
#include <gtest/gtest.h>

TEST(Colour,Empty_Constructor) {
  Colour B1;
  EXPECT_EQ(0, B1.getr());
}

TEST(Colour,Constructor) {
    Colour B1(1,3,4);
    EXPECT_EQ(1, B1.getr());
}
