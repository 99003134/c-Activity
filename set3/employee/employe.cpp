#include"employee.h"
#include"engineer.h"
#include"manager.h"
#include"trainee.h"
#include <gtest/gtest.h>

int main(int argc, char **argv)
{
    Engineer e1("XX","YY",2.3,3,1);
    e1.display();
    std::cout<<e1.appraisal(2);
    Manager e2("XX","YY",2.3,3,1,2);
    e2.display();
    std::cout<<e2.appraisal(2);
    Trainee e3("XX","YY",2.3,"ZZ",1.0);
    e3.display();
    std::cout<<e3.appraisal(2);
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    return 0;
}
