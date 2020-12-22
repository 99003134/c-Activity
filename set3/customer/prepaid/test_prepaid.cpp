#include "prepaid.h"
#include <gtest/gtest.h>


TEST(PrepaidCustomer, Empty_Cosnstructor1) {
    PrepaidCustomer B1;
  EXPECT_EQ(0, B1.getBalance());
}
