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
  AccountBase():m_accNumber(0),m_accName(0), m_balance(0.0){

  }
  AccountBase(std::string s1,std::string s2,double b):m_accNumber(s1),m_accName(s2), m_balance(b){

  }
  AccountBase(std::string s1,std::string s2):m_accNumber(s1),m_accName(s2), m_balance(0.0){

  }
  AccountBase(const AccountBase& ref):m_accNumber(ref.m_accNumber),m_accName(ref.m_accName), m_balance(ref.m_balance){

  }
  virtual void debit(double)=0;
  virtual void credit(double)=0;
  virtual void display() const = 0;
  double getBalance() const{
      return m_balance;
  }
};

#endif