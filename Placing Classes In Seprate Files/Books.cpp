#include "Books.h"
/// this above header is declared in Books.cpp bcoz it tells that the prototyping of function is done in Books.h

/// u declare binary scope res. ope. bcoz u can define classes -
/// - which can have same function for eg. setBookId, getBookId. So how u recgnoize that this book id fun. belongs to which class
Books::Books()   /// :: it is binary scope resolution operator
{

}
void Books :: setBookId(int bookId_)
{
        bookId = bookId_;
}
int Books :: getBookId()     /// see it is int not void And there is not arguments are passed
{
        return bookId;
}

