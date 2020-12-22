#include "currency.h"
#include <gtest/gtest.h>
namespace {
TEST(Currency, operator1) 
{
   Currency C1(2,10);
    Currency C2(4,98);
    Currency C3(C1 + C2);
    EXPECT_EQ(7, C3.get_rupees());
    EXPECT_EQ(8, C3.get_paise());
}
TEST(Currency, operator2) 
{
    Currency C1(2,10);
    Currency C2(4,98);
    //Currency C3;
    Currency C3(C2- C1); 
    /*if(C1>C2){
       Currency C3(C1 - C2); 
    }
    else{
        Currency C3(C2 - C1);
    }*/
    
    EXPECT_EQ(2, C3.get_rupees());
    EXPECT_EQ(88, C3.get_paise());
}
TEST(Currency, operator3) 
{
    Currency C1(2,10);
    //Currency C2(4,98);
    Currency C3(C1 + 4);
    EXPECT_EQ(6, C3.get_rupees());
    EXPECT_EQ(10, C3.get_paise());
}
TEST(Currency, operator4) 
{   Currency C1(9,10);
    //Currency C2(4,98);
    Currency C3(C1 - 4);
    EXPECT_EQ(5, C3.get_rupees());
    EXPECT_EQ(10, C3.get_paise());
}
TEST(Currency, operator5) 
{
    Currency C1(2,10);
    //Currency C2(4,98);
    Currency C3=++C1;
    EXPECT_EQ(3, C3.get_rupees());
    EXPECT_EQ(11, C3.get_paise());
}
TEST(Currency, operator6) 
{    Currency C1(2,10);
    //Currency C2(4,98);
    Currency C3=C1++;
    EXPECT_EQ(2, C3.get_rupees());
    EXPECT_EQ(10, C3.get_paise());

}
TEST(Currency, operator7) 
{
    Currency C1(2,10);
    Currency C2(2,10);
     EXPECT_EQ(1, C1==C2);
    
}
    
TEST(Currency, operator8) 
{
   Currency C1(2,10);
    Currency C2(2,10);
     EXPECT_EQ(0, C1<C2);
    
}
TEST(Currency, operator9) 
{
   Currency C1(2,10);
    Currency C2(2,10);
     EXPECT_EQ(0, C1>C2);
    
}
}
