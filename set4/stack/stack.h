#ifndef __GSTACK_H
#define __GSTACK_H
#include<iostream>

constexpr int max_size=50;

template<typename T>
class MyStack {
  T m_arr[max_size];
  int m_top;
  int m_maxlen;
  public:
  MyStack(): m_top(-1),m_maxlen(20){

  }
  MyStack(int len):m_top(-1),m_maxlen(len){

  }
  void push(T val){
      if(!isFull()){
          m_arr[++m_top]=val;
      }
 }
  T pop(){
      if(!isEmpty()){
      return m_arr[m_top--];
    }
  }
  //T peek() const;
  bool isEmpty() const{
     return  (m_top==-1)?1:0;
  }
  bool isFull() const{
      return (m_top==m_maxlen)?1:0;
  }
};

#endif