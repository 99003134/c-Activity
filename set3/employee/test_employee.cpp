#include "employee.h"
#include "engineer.h"
#include "manager.h"
#include "trainee.h"
#include <gtest/gtest.h>

TEST(Engineer, Empty_Cosnstructor) {
    Engineer e1("XX","YY",2.3,3,1);
  EXPECT_EQ(2, (int)e1.appraisal(2));
}
TEST(Manager, Empty_Cosnstructor1) {
    Manager e2("XX","YY",2.3,3,1,2);
  EXPECT_EQ(2, (int)e2.appraisal(2));
}
TEST(Trainee, Empty_Cosnstructor1) {
    Trainee e3("XX","YY",2.3,"ZZ",1.0);
  EXPECT_EQ(2, (int)e3.appraisal(2));
}
