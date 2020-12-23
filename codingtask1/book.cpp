#include"book.h"
Book::Book():m_isbn(0),m_title(""),m_author(""),m_year(0),m_price(0.0),m_pages(0){

  }
  //TODO: param ctor
  Book::Book(int isbn,std::string title,std::string author,int year,double price,int pages):m_isbn(isbn),m_title(title),m_author(author),m_year(year),m_price(price),m_pages(pages){

  }
  //TODO: getter functions - isbn(), title(), author()
  //                       - author(), publisher(), year()
  //                       - price(), pages()
  int Book::isbn() const{
      return m_isbn;
  }
  std::string Book::title() const{
      return m_title;
  }
   std::string Book::author() const{
      return m_author;
  }
   int Book::year() const{
      return m_year;
  }
  int Book::pages() const{
      return m_isbn;
  }
  double Book::price() const{
      return m_price;
  }
  //TODO:- display
  void Book::display() const{
      std::cout<<"isbn :"<<m_isbn<<" title: "<<m_title<<" author: "<<m_author<<" year:"<<m_year<<" price:"<<m_price<<" pages:" <<m_pages<<"\n";
  }
  //TODO:- const suffix for immutable function