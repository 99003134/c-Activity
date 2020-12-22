#include "customer.h"
#include <gtest/gtest.h>

std::string m_custId;
  std::string m_custName;
  std::string m_phone; 
  double m_balance;
  AccountType m_type;
  Customer::Customer():m_custId("XXX"),m_custName("YYYY"),m_phone("ZZZZ"),m_balance(0.0){}
  Customer::Customer(std::string s1,std::string s2,std::string s3,double d):m_custId(s1),m_custName(s2),m_phone(s3),m_balance(d){}
  Customer::Customer(std::string s1,std::string s2,std::string s3):m_custId(s1),m_custName(s2),m_phone(s3){}
  Customer::Customer(const Customer& ref):m_custId(ref.m_custId),m_custName(ref.m_custName),m_phone(ref.m_phone),m_balance(ref.m_balance){}
  void Customer::credit(double amount)
  {
      m_balance+=amount;
  }
 
  void Customer::makeCall(double amount)
  {
      m_balance-=amount*10;
  }
  double Customer::getBalance() const
  {
      return m_balance;
  }
  void Customer::dispay() const
  {
      std::cout<<m_custId<<","<<m_custName<<","<<m_phone<<","<<m_balance<<"\n";
  }

  int main(int argc, char **argv)
  {
    Customer c1;
    Customer c2("9980","Sindhu","Iphone",100);
    c2.dispay();
    c1.dispay();
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    return 0;
  }