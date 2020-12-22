#include "postpaid.h"
#include <gtest/gtest.h>

TEST(PostpaidCustomer, Empty_Cosnstructor) {
    PostpaidCustomer B1;
  EXPECT_EQ(0, B1.getBalance());
}
TEST(PostpaidCustomer, Cosnstructor) {
    PostpaidCustomer B1("sindhu","100","iphone",100,12);
    B1.makeCall(1);
  EXPECT_EQ(90, B1.getBalance());
}

