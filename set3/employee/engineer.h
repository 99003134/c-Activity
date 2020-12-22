#ifndef __ENGINEER_H
#define __ENGINEER_H

#include "employee.h"

class Engineer : public Employee {
  int m_projCode;
  public:
  Engineer(std::string id, std::string name, double salary,int exp,int code):m_projCode(code),Employee(id,name,salary,exp){}
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
    std::cout<<m_empid<<":"<<m_name<<":"<<m_salary<<":"<<m_exp<<":"<<m_projCode<<"\n";
  }
};

#endif

  
