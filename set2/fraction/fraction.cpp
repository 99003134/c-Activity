#include "fraction.h"
#include <gtest/gtest.h>

Fraction::Fraction():m_numerator(1),m_denominator(3){}
Fraction::Fraction(int n,int d):m_numerator(n),m_denominator(d){}
Fraction::Fraction(int value):m_numerator(value),m_denominator(value){}
Fraction Fraction::operator+(const Fraction& f1)
{
    return Fraction((this->m_numerator*f1.m_denominator)+(this->m_denominator*f1.m_numerator),this->m_denominator*f1.m_denominator);
}
Fraction Fraction::operator-(const Fraction& f1)
{
    return Fraction((this->m_numerator*f1.m_denominator)-(this->m_denominator*f1.m_numerator),this->m_denominator*f1.m_denominator);
}
Fraction Fraction::operator+(int value)
{
    return Fraction(this->m_numerator+(value*this->m_denominator),this->m_denominator);
}
Fraction Fraction::operator-(int value)
{
    return Fraction(this->m_numerator-(value*this->m_denominator),this->m_denominator);
}
bool Fraction::operator==(const Fraction& f1)
{
    return((m_numerator==f1.m_numerator)&&(m_denominator==f1.m_denominator));
}
bool Fraction::operator<(const Fraction& f1)
{
    return ((m_numerator/m_denominator)<(f1.m_numerator/f1.m_denominator));
}
bool Fraction::operator>(const Fraction& f1)
{
    return ((m_numerator/m_denominator)>(f1.m_numerator/f1.m_denominator));
}
Fraction Fraction::simplify()
{
    for(int i=m_numerator/1;i>1;i--)
    {
        if((m_numerator%i==0)&&(m_denominator%i==0))
        {
            m_numerator/=i;
            m_denominator/=i;
            break;
        }
    }
    return Fraction(m_numerator,m_denominator);
}
bool Fraction::isSimplest() const
{
    return (m_denominator%m_numerator!=0);
}
void Fraction::dispay() const
{
    std::cout<<m_numerator<<"/"<<m_denominator<<"\n";
}
std::ostream& operator<<(std::ostream& cout, const Fraction& f1)
{
    return cout<<f1.m_numerator<<"/"<<f1.m_denominator;
}
int main(int argc, char **argv)
{
    Fraction f1(2,3);
    Fraction f2(1,4);
    Fraction f3;
    f3=f1+f2;
    Fraction f5(2,10);
    f5.simplify();
    f5.dispay();
    f3.dispay();
    f1.dispay();
    //f1.isSimplest();
    //std::cout<<f5.isSimplest();
    std::cout<<f2;
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    return 0;
}