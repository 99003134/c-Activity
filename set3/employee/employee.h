#ifndef __EMPLOYEE_H
#define __EMPLOYEE_H

#include<iostream>

class Employee{
  protected:
  std::string m_empid;
  std::string m_name;
  double m_salary;
  int m_exp;
  public:
  Employee(std::string id, std::string name, double salary,int exp):m_empid(id),m_name(name),m_salary(salary),m_exp(exp){}
  virtual void display()=0;
  virtual void payroll()=0;
  virtual double appraisal(int amount)=0;

};

#endif
  
