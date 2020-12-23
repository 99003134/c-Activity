#include"library.h"
void Library::addBook(int isbn, std::string title, std::string author, 
                            int year, double price, int pages) {
    //Book temp(isbn, title, author, year, price, pages);
    //books.push_back(temp);                            
    
    //books.push_back(Book(isbn, title, author, year, price, pages));
    
    books.emplace_back(isbn, title, author, year, price, pages);
}
void Library::displayAll() {
   std::list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter)
       iter->display();
   //for(Book& ref:books)
   //       ref.display();
}
Book* Library::findBookByISBN(int keyIsbn) {
     std::list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter){
       if(iter->isbn() == keyIsbn){
              break;
       }
          
   }
   if(iter!=books.end())
     return &(*iter);
   else
     return nullptr;
}
bool Library::isBookFound(int keyIsbn) {
     std::list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter){
       if(iter->isbn() == keyIsbn)
          break;
   }
   if(iter!=books.end())
     return true;
   else
     return false;
}
void Library::removeBookByISBN(int keyIsbn) {
     std::list<Book>::iterator iter;
   for(iter=books.begin(); iter!=books.end(); ++iter){
       if(iter->isbn() == keyIsbn)
          break;
   }
   if(iter!=books.end())
     books.erase(iter);
}
double Library::findAveragePrice() {
  double totalPrice=0;
  std::list<Book>::iterator iter;
  for(iter=books.begin(); iter!=books.end(); ++iter){
           totalPrice += iter->price();
    }
  return totalPrice/books.size();
}
int Library::countBooksInPriceRange(int minVal, int maxVal) {
        int count=0;
         std::list<Book>::iterator iter;
       for(iter=books.begin(); iter!=books.end(); ++iter)
       {
           if(iter->price()>=minVal && iter->price()<=maxVal){
               count++;
           }
        }
    return count;
}
Book* Library::findBookwithMaxPages() {
    std::list<Book>::iterator iter;
     iter = books.begin();
  auto maxIter=iter;
  double maxPrice=iter->price();
  ++iter;
  for(;iter!=books.end(); ++iter){
    if(iter->price() > maxPrice) {
        maxPrice = iter->price();
        maxIter = iter;
    }
  }
    return &(*maxIter);
}