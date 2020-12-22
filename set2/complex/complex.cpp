#include "complex.h"
Complex::Complex():m_real(0),m_imag(0)
{
}
Complex::Complex(int real,int img):m_real(real),m_imag(img)
{

}
Complex::Complex(int val):m_real(val),m_imag(val)
{
}
Complex Complex::operator+(const Complex& ref)
{
    return Complex(this->m_real + ref.m_real, this->m_imag + ref.m_imag);
}
Complex Complex::operator-(const Complex& ref)
{
    return Complex(this->m_real - ref.m_real, this->m_imag - ref.m_imag);
}
/* Complex Complex::operator*(const Complex&)
{
    //
}
*/
Complex& Complex::operator++()
{
    m_real++;
    m_imag++;
    return *this;
}
/*Post increment */
Complex Complex::operator++(int)
{
   Complex temp(m_real, m_imag);
   m_real++;
   m_imag++;
   return temp;
}

bool Complex::operator==(const Complex& ref)
{
    return (m_real==ref.m_real)&&(m_imag == ref.m_imag);
}

std::ostream& operator<<(std::ostream& rout, const Complex& ref)
{
    rout << ref.m_real << " + " <<ref.m_imag;
    return rout;
}
int Complex::get_real()
{
    return m_real;
}
int Complex::get_img()
{
    return m_imag;
}

void Complex::dispay() const
{
    std::cout << m_real<< " + " << m_imag;
}