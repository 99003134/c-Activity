#include <iostream>
#include"colour.h"
#include <gtest/gtest.h>

    Colour::Colour():m_r{0}, m_g{0}, m_b{0} {}

    Colour::Colour(int r,int g,int b):m_r{r}, m_g{g}, m_b{b} {}

    Colour::Colour(int value):m_r{value}, m_g{value},m_b{value} {}

    void Colour::invert()
    {
        m_r=255-m_r;
        m_g=255-m_g;
        m_b=255-m_b;
    }

    void Colour::display() const
    {
        std::cout<<m_r<<std::endl;
        std::cout<<m_g<<std::endl;
        std::cout<<m_b<<std::endl;
    }
    int Colour::getr()
    {
        return m_r;
    }

    int main(int argc, char **argv)
    {
        Colour c1;
        c1.display();
        testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
        return 0;
    }
   

