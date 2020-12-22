#include "customer.h"
#include <gtest/gtest.h>
namespace {
TEST(Customer, Empty_Cosnstructor) {
    Customer B1;
  EXPECT_EQ(0.0, B1.getBalance());
  
}

TEST(Customer, Parameterized_Cosnstructor) {
    Customer B1("100","Sindhu","iphone",120);
    B1.credit(10);
  EXPECT_EQ(130.0, B1.getBalance());
  
}

TEST(Customer, Copy_Cosnstructor) {
    Customer B1("100","Sindhu","iphone",120);
    Customer B2(B1);
  EXPECT_EQ(120.0, B2.getBalance());
}
}