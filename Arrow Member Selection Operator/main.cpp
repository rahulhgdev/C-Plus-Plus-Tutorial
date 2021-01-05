#include <iostream>
#include <string>
#include "Books.h"
using namespace std;

int main()
{


    Books book1;
    Books *bookPointer = &book1;
    book1.setBookId(100);
    cout<<book1.getBookId()<<endl;

    (*bookPointer).setBookId(300);  /// --1st
    cout<<book1.getBookId()<<endl;

    /// arrow member and below code will perform same task as above that is  --1st but below one is look readable and understandable

    bookPointer->setBookId(1000);   /// the -> arrow is called arrow member selection operator and the function is same as . dot seprator i.e. --1st but whenever you use arrow then c++ know this is pointer
    cout<<book1.getBookId()<<endl;
    return 0;
}
