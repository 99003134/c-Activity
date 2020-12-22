#ifndef __ACCOUNT_H
#define __ACCOUNT_H

#include<string>
#include<iostream>

class AccountBase {
  protected:
  std::string m_accNumber;
  std::string m_accName;
  double m_balance;
  public:
  AccountBase():m_accName("XX"),m_accNumber("YY"),m_balance(0.0){}
  AccountBase(std::string s1,std::string s2,double d):m_accName(s1),m_accNumber(s2),m_balance(d){}
  //AccountBase(std::string,std::string);
  //AccountBase(const AccountBase&);
  virtual void debit(double)=0;
  virtual void credit(double)=0;
  virtual void dispay() const = 0;


};

#endif