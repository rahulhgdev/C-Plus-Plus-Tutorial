#include <iostream>
#include <cstring>     /// whenever you use strcpy(string copy)

using namespace std;

/// Structures are used to defines your own datatype

struct Books
{
    char name[50];
    char author[50];
    int id;
};
int main()
{
    struct Books book1;   /// here book1 is a variable and Book is datatype
   /// book1.name = "Chaman";     /// it will protect from modification
    strcpy(book1.name,"Chaman"); /// this is more efficient way to copy string into character array

   ///book1.author = "Bhim Narula";
    strcpy(book1.author,"Bhim Narula");

    book1.id = 1;

    cout<<"Book 1 name :"<<book1.name<<endl;
    cout<<"Book 1 Author :"<<book1.author<<endl;
    cout<<"Book 1 id :"<<book1.id<<endl;

    return false;
}
