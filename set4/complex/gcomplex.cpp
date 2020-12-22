#include "gcomplex.h"

template<typename T>
Complex<T>::Complex():m_real(0),m_image(0){}
template<typename T>
Complex<T>::Complex(T x,T y):m_real(x),m_image(0){}
template<typename T>
void Complex<T>::display()
{
    std::cout<<m_real<<"+i"<<m_image<<"\n";
}

int main()
{
    Complex<int> c1(1,2);
    c1.display();
    Complex<float> c2(1.2,2.2);
    c2.display();
    return 0;
}