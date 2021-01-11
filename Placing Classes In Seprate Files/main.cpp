#include <iostream>
#include <string>
using namespace std;
/// when your program is huge then you need to seprate classes which will protect from overwhelming
/// it will make your program readable and accesable
/// u need to include header file in Books.h too(all headers)
int main()
{
    Books book1;
    book1.setBookId(100);
    cout<<book1.getBookId()<<endl;
}
