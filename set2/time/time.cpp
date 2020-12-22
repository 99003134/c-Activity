#include "time.h"
#include <gtest/gtest.h>

  MyTime::MyTime():m_hours(0),m_minutes(0),m_seconds(0){ }
  MyTime::MyTime(int h, int m, int s) : m_hours(h),m_minutes(m),m_seconds(s){}
  //MyTime::MyTime(const MyTime& ref) : m_hours(ref.m_hours),m_minutes(ref.m_minutes),m_seconds(ref.m_seconds){}
  MyTime MyTime::operator+(const MyTime& ref) 
  {
    int tsec = m_seconds+ref.m_seconds; 
    int tmins = m_minutes+ ref.m_minutes;  //TODO:tmins > 60
    int thrs = m_hours + ref.m_hours; 
    if(tsec>=60)
    {
        tmins/=60;
        tsec=tsec%60;
    }
     if(tmins>=60)
        {
            thrs/=60;
            tmins%=60;
        }

    // MyTime tmp(thhrs, tmins);
    //return tmp;
    return MyTime(thrs, tmins, tsec);
  }
  MyTime MyTime::operator+(int nsec) {
    int tsec = m_seconds + nsec;
    int tmins = m_minutes; // TODO: tmins > 60
    int thrs = m_hours; 
    if(tsec>=60)
    {
        tmins/=60;
        tsec=tsec%60;
    }
     if(tmins>=60)
        {
            thrs/=60;
            tmins%=60;
        }          
    return MyTime(thrs, tmins,tsec);
  }
  void MyTime::dispay() const 
  { 
      std::cout << m_hours << ":" << m_minutes << ":"<<m_seconds<<"\n"; 
}
MyTime MyTime::operator++(int)
{
   MyTime temp(m_hours, m_minutes,m_seconds);
   m_hours++;
   return temp;
}

bool MyTime::operator==(const MyTime& ref)
{
    return (m_hours==ref.m_hours)&&(m_minutes == ref.m_minutes)&&(m_seconds==ref.m_seconds);
}
int MyTime::gethrs() const
{
  return m_hours;
}


int main(int argc, char **argv) {
  MyTime t1(10,20,30);
  MyTime t2(1,15,30);
  MyTime t3;
  t3 = t1 + t2;    // t1.operator+(t2)
  t3.dispay();

  MyTime t4;
  t4 = t1 + 50;    //t1.operator+(50)
  t4.dispay();
  testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
  return 0;
}