#include"stack.h"
#include <gtest/gtest.h>
using namespace std;
int main(int argc, char **argv){
    MyStack<int> S(10);
    S.push(20);
    S.push(23);
    S.push(24);
    int k=S.pop();
    cout<<k<<endl;
    MyStack<double> S2(13);
    S2.push(20.89);
    S2.push(23.42);
    S2.push(24.33);
    double t=S2.pop();
    cout<<t<<endl;
    cout<<S2.pop()<<endl;
    cout<<S2.pop()<<endl;
    
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

}