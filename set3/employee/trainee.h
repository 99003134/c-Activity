#ifndef __TRAINEE_H
#define __TRAINEE_H

#include "employee.h"

class Trainee : public Employee {
  std::string m_track;
  double m_score;
  public:
  Trainee(std::string id, std::string name, double salary,std::string track ,double score):m_track(track),m_score(score),Employee(id,name,salary,1){}
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
    std::cout<<m_empid<<":"<<m_name<<":"<<m_salary<<":"<<m_exp<<":"<<m_track<<":"<<m_score<<"\n";
  }
};

#endif
  
