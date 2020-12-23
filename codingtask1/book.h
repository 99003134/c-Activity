#ifndef __BOOK_H
#define __BOOK_H
#include<string>
#include<iostream>

class Book {
  int m_isbn;     //ideally to be std::string
  std::string m_title;
  std::string m_author;
  //std::string m_publisher;
  int m_year;       //publishing
  double m_price;
  int m_pages;
  public:
  //TODO: default ctor
  Book();
  //TODO: param ctor
  Book(int ,std::string ,std::string ,int,double ,int);
  //TODO: getter functions - isbn(), title(), author()
  //                       - author(), publisher(), year()
  //                       - price(), pages()
  int isbn() const;
  std::string title() const;
  std::string author() const;
  int year() const;
  int pages() const;
  double price() const;
  //TODO:- display
  void display() const;
  //TODO:- const suffix for immutable function

};
#endif