#include"distance.h"
#include <gtest/gtest.h>
Distance::Distance():m_feets(0),m_inches(0){}
Distance::Distance(int feet,int inch):m_feets(feet),m_inches(inch){}
Distance::Distance(int value):m_feets(value),m_inches(value){}
Distance Distance::operator+(const Distance& d)
{
    Distance temp;
    temp.m_inches=(this->m_inches+d.m_inches);
    temp.m_feets=(this->m_feets+d.m_feets);
    if((temp.m_inches)>=12)
    {
        temp.m_feets=temp.m_feets+(temp.m_inches/12);
        temp.m_inches=temp.m_inches%12;
    }
    //std::cout<<temp.m_feets;
    return temp;
}
Distance Distance::operator-(const Distance& d1)
{
    return (this->m_feets-d1.m_feets, this->m_inches-d1.m_inches);
    
    /*
    if((temp.m_inches)>=12)
    {
        temp.m_feets=temp.m_feets+(temp.m_inches/12);
        temp.m_inches=temp.m_inches%12;
    }*/
    //std::cout<<temp.m_feets;
    
}
void Distance::dispay() const
{
    std:: cout<<m_feets<<" feet "<<m_inches<<" inch "<<"\n";
}
bool Distance:: operator==(const Distance& d)
{
    return ((m_feets==d.m_feets)&&(m_inches==d.m_inches));
}
int Distance::getFeet()
    {
        return m_feets;
    }
int Distance::getInch()
{
    return m_inches;
}
int main(int argc, char **argv)
{
    Distance d1(5,8);
    Distance d2(3,10);
    d1.dispay();
    d2.dispay();
    Distance d3;
    Distance d4;
    d3=d1+d2;
    d4=d1-d2;
    d3.dispay();
    d4.dispay();
    std::cout<<(d1==d2);
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    return 0;
    
}
