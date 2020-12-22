#ifndef __PREPAID_H
#define __PREPAID_H

#include<string>
#include<cstdint>
#include <gtest/gtest.h>

#include "customer.h"

class PrepaidCustomer : public CustomerBase {
  void recharge(double amount)
  {
    m_balance-=amount;
  }
  int m_billDate;
  public:
  PrepaidCustomer():m_billDate(1),CustomerBase(){}
 PrepaidCustomer(std::string s1,std::string s2,std::string s3,double d,int b):m_billDate(b),CustomerBase(s1,s2,s3,d){}
  
  void credit(double amount)
  {
    m_balance+=amount;
  }          //recharge or billPay
  void makeCall(double calls)
  {
    m_balance-=(calls*10);
  }
  double getBalance() const
  {
    return m_balance;
  }
  void dispay() const
  {
    std:: cout<<m_custId<<" "<<m_custId<<" "<<m_custName<<" "<<m_phone<<" "<<m_balance<<"\n";
  }

};

#endif

int main(int argc, char **argv)
{
  PrepaidCustomer p1("sindhu","123","iphone",100,12);
  p1.dispay();
  p1.makeCall(2);
  std::cout<<p1.getBalance()<<"\n";
  testing::InitGoogleTest(&argc, argv);
      return RUN_ALL_TESTS();
  return 0;
}
