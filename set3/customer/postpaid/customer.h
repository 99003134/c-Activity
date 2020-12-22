#ifndef __CUSTOMER_H
#define __CUSTOMER_H

#include<string>
#include<cstdint>
#include<iostream>

enum AccountType {
  Prepaid,
  Postpaid
};

class CustomerBase {
  protected:
  std::string m_custId;
  std::string m_custName;
  std::string m_phone; 
  double m_balance;
  AccountType m_type;
  public:
  CustomerBase():m_custId("XX"),m_custName("YY"),m_phone("ZZ"),m_balance(0.0){}
  CustomerBase(std::string s1,std::string s2,std::string s3,double d):m_custId(s1),m_custName(s2),m_phone(s3),m_balance(d){}
  //CustomerBase(std::string,std::string,std::string);
  //CustomerBase(const Customer&);
  virtual void credit(double)=0;           //recharge or billPay
  virtual void makeCall(double)=0;
  //virtual double getBalance() const;
  virtual void dispay() const=0;
};

#endif
