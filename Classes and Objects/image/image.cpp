#include <iostream>
#include"image.h"
#include <gtest/gtest.h>

using namespace std;

Image::Image():m_x(0), m_y(0),m_width(0), m_height(0){}
Image::Image(int x,int y,int w,int h):m_x(x), m_y(y),m_width(w), m_height(h){}
Image::Image(const Image &ref):m_x(ref.m_x), m_y(ref.m_y),m_width(ref.m_width), m_height(ref.m_height){}
void Image::move(int h,int v)
{
    m_x+=h;
    m_y+=v;
}
void Image::scale(int size)
{
    m_width*=size;
    m_height*=size;
}
void Image::resize(int w,int h)
{
    m_width=w;
    m_height=h;
}
void Image::display() const
{
    cout<<"x="<<m_x<<endl;
    cout<<"y="<<m_y<<endl;
    cout<<"width="<<m_width<<endl;
    cout<<"height="<<m_height<<endl;
}
int Image::getx() const
{
    return m_x;
}
int main(int argc, char **argv)
{
    Image i;
    i.display();
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

