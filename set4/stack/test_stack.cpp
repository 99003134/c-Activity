#include "stack.h"
#include <gtest/gtest.h>
namespace {
TEST(Stack, inta) {
  MyStack<int> S(10);
  S.push(20);
  S.push(23);
  S.push(24);
  EXPECT_EQ(24, S.pop());
  EXPECT_EQ(23, S.pop());
  EXPECT_EQ(20, S.pop());
}
TEST(Stack, doublea) {
  MyStack<double> S2(10);
  S2.push(20.22);
  S2.push(23.33);
  S2.push(24.44);
  EXPECT_EQ(24.44, S2.pop());
  EXPECT_EQ(23.33, S2.pop());
  EXPECT_EQ(20.22, S2.pop());
}
TEST(Stack, full) {
  MyStack<double> S2(2);
  S2.push(20.22);
  S2.push(23.33);
  S2.push(24.44);
  EXPECT_EQ(1, S2.isFull());
  
}
TEST(Stack, empty) {
  MyStack<double> S2(10);
  EXPECT_EQ(1, S2.isEmpty());
}
}