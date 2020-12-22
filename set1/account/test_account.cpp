#include "account.h"
#include <gtest/gtest.h>
namespace {
TEST(Account, Transfer1)
 {
    Account B1("100","sindhu",500);
    B1.debit(10.0);
    EXPECT_EQ(490, B1.getBalance());
  
}

TEST(Account, Empty_Cosnstructor) 
{
    Account B1;
    EXPECT_EQ(0.0, B1.getBalance());

}

TEST(Account, Copy_Cosnstructor) {
    Account B1("1001","Pitta",300);
    Account B2(B1);
    EXPECT_EQ(300, B2.getBalance());
}
}