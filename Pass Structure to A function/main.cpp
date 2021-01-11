#include <iostream>
#include <cstring>

using namespace std;



struct Books
{
    char name[50];
    char author[50];
    int id;
};

void printBook(struct Books book)
    {
    cout<<"Book 1 name :"<<book1.name<<endl;
    cout<<"Book 1 Author :"<<book1.author<<endl;
    cout<<"Book 1 id :"<<book1.id<<endl;
  }
int main()
{
    struct Books book1;

    strcpy(book1.name,"Chaman");
    strcpy(book1.author,"Bhim Narula");
    book1.id = 1;

    //cout<<"Book 1 name :"<<book1.name<<endl;
   // cout<<"Book 1 Author :"<<book1.author<<endl;
   // cout<<"Book 1 id :"<<book1.id<<endl;

    printBook(book1);
    return false;
}
