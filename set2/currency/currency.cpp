#include "currency.h"
#include <gtest/gtest.h>
Currency::Currency():m_rupees(0),m_paise(0)
{

}
Currency::Currency(int i,int j):m_rupees(i),m_paise(j)
{

}
Currency::Currency(int i):m_rupees(i),m_paise(i)
{

}
Currency Currency::operator+(const Currency& ref){
 Currency temp;
 temp.m_paise=m_paise+ref.m_paise;
 temp.m_rupees=m_rupees+ref.m_rupees;
 if(temp.m_paise>=100){
     temp.m_rupees+=1;
     temp.m_paise-=100;
 }
 return temp;
}
Currency Currency::operator-(const Currency& ref){
 Currency temp;
 temp.m_paise=m_paise-ref.m_paise;
 temp.m_rupees=m_rupees-ref.m_rupees;
 if(temp.m_paise<=0){
     temp.m_rupees-=1;
     temp.m_paise+=100;
 }
 return temp;
}
Currency Currency::operator+(int i){
  Currency temp;
   temp.m_rupees=m_rupees+i;
   temp.m_paise=m_paise;
   return temp;
}
Currency Currency::operator-(int i){
   Currency temp;
   temp.m_rupees=m_rupees-i;
   temp.m_paise=m_paise;
   return temp;
}
Currency& Currency::operator++(){
      m_rupees++;
      m_paise++;
      return *this;
}
Currency Currency::operator++(int){
      Currency temp(*this);
      m_rupees++;
      m_paise++;
      return temp;
}
bool Currency::operator==(const Currency& ref){
      return (m_rupees==ref.m_rupees&&m_paise==ref.m_paise);
}
bool Currency::operator<(const Currency& ref){
       return (m_rupees<ref.m_rupees||m_paise<ref.m_paise);
}
bool Currency::operator>(const Currency& ref){
        return (m_rupees>ref.m_rupees||m_paise>ref.m_paise);
}

void Currency::dispay() const{
      std::cout<<m_rupees<<" :"<<m_paise;
}

std::ostream& operator<<( std::ostream& rout, const Currency& ref){
   rout << ref.m_rupees<< " : " <<ref.m_paise;
     return rout;
}
int Currency::get_rupees()
{
    return m_rupees;
}
int Currency::get_paise()
{
    return m_paise;
}
int main(int argc, char **argv)
{
    Currency c1;
    std::cout<<c1<<"\n";
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    return 0;
}

