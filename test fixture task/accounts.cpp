#include "savingsaccount.h"
#include "creditaccount.h"
#include <gtest/gtest.h>
int main(int argc, char **argv){
    AccountBase *ac;
    SavingsAccount S1("123","manu",123.22);
    S1.display();
    std::cout<<"\n";
    S1.credit(1000);
    S1.debit(200);
    S1.display();
    std::cout<<"\n";
    CreditAccount C1("123","manu",123.22);
    C1.display();
     std::cout<<"\n";
    C1.credit(2000);
    C1.debit(800);
    C1.display();
  
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();

}