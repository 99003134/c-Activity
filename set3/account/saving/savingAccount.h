#ifndef __SAVINGS_ACCOUNT_H
#define __SAVINGS_ACCOUNT_H


#include<string>
#include<iostream>
#include "account.h"
#include <gtest/gtest.h>


class SavingsAccount : public AccountBase {
  public:

SavingsAccount():AccountBase(){}
SavingsAccount(std::string s1,std::string s2,double d):AccountBase::AccountBase(s1,s2,d){}

  
  void debit(double amount)
  {
      m_balance-=amount;
  }
  void credit(double amount)
  {
      m_balance+=amount;
  }
  void dispay() const
  {
      std::cout<<m_accName<<","<<m_accNumber<<","<<m_balance<<"\n";
  }
  int  getbalance() const
  {
      return m_balance;
  }
};



#endif

int main(int argc, char **argv)
  {
      SavingsAccount s("Sindhu","100",100);
      s.dispay();
      testing::InitGoogleTest(&argc, argv);
      return RUN_ALL_TESTS();
      return 0;
  }
