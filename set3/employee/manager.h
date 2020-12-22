#ifndef __MANAGER_H
#define __MANAGER_H

#include "employee.h"

class Manager : public Employee {
  int m_projCode;
  int m_reportees;
  public:
  Manager(std::string id, std::string name, double salary,int exp,int code,int reprtees):m_projCode(code),m_reportees(reprtees),Employee(id,name,salary,exp){}
  void payroll()
  {
    std::cout<<"receive the salary on dd/mm/yyy"<<"\n";
  }
  double appraisal(int amount)
  {
    return m_salary+=m_salary*(amount/100);
  }
  void display()
  {
    std::cout<<m_empid<<":"<<m_name<<":"<<m_salary<<":"<<m_exp<<":"<<m_projCode<<":"<<m_reportees<<"\n";
  }
};

#endif
  
