#include "savingAccount.h"
#include <gtest/gtest.h>

TEST(SavingsAccount, Empty_Cosnstructor) {
    SavingsAccount B1;
  EXPECT_EQ(0, B1.getbalance());
}
TEST(SavingsAccount, Cosnstructor) {
    SavingsAccount B1("sindhu","100",100);
    B1.credit(120);
    B1.debit(10);
  EXPECT_EQ(210, B1.getbalance());
}