#include "point.cpp"
#include "space.h"
#include "space.cpp"
int main(){
    Space S;
    S.addPoint(4,3);
    S.addPoint(3,2);
    S.addPoint(-2,3);
    S.addPoint(-2,-8);
    S.addPoint(-6,-8);
    S.addPoint(4,-3);
    S.displayall();
    std::cout<<"**********************\n";
    std::cout<<S.countbyquad(3)<<"\n";
    std::cout<<"**********************\n";
    std::cout<<S.countoncircle(5.0)<<"\n";
    std::cout<<"**********************\n";
    S.findoncircle(5.0)->display();
      std::cout<<"**********************\n";
    S.findonquad(1)->display();
     std::cout<<"**********************\n";
     std::cout<<S.countincircle(5.0);
}