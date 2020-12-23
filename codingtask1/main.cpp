#include"library.h"
#include"book.cpp"
#include"library.cpp"
int main(){
    Library L;
    L.addBook(121,"MATHS","ARYABATTA",1998,200.89,390);
    L.addBook(122,"science","ARYA",1997,200.89,290);
    L.addBook(123,"biology","BATTA",1990,800.89,890);
    L.displayAll();
    L.findBookByISBN(121)->display();
    std::cout<<"Average price:"<<L.findAveragePrice()<<"\n";
    L.removeBookByISBN(122);
    L.displayAll();
    L.findBookwithMaxPages()->display();
    std::cout<<L.isBookFound(122)<<"\n";
}