#ifndef __LIBRARY_H
#define __LIBRARY_H

#include "book.h"
#include <list>

class Library {
  std::list<Book> books;
  public:
  void addBook(int ,std::string,std::string , 
                            int, double , int);
  void removeBookByISBN(int );
  void displayAll();
  Book* findBookByISBN(int );
  double findAveragePrice();
  Book* findBookwithMaxPages();
  bool isBookFound(int);
  int countBooksInPriceRange(int , int) ;
  //int count() { return books.size(); }
  //sortByTitle, sortByAuthor
  //MinPriceReleased in an year
};
#endif