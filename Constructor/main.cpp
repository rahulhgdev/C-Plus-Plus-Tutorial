#include <iostream>

using namespace std;

    ///Generally we use constructors are used to initialize the value of variable in the class
     /// Constructor - Constructor is a special member function of class and it has same name as class name
class Book{
public:
    Book(string x)            /// passing values in constructor
    {
    ///cout<<"We are in Constructor";
    setName(x);
    }
    void setName(string x){
    name = x;
    }
    string getname(){
    return name;
    }
private:
   string name;
};
int main()
{

    Book book1("Chaman"); /// whenever you initialize your constructor with arguments then you have initialize your object with argument which is string also.
    cout<<book1.getname()<<endl;


    Book book2("Chutiya");
    cout<<book2.getname()<<endl;
    return 0;
}
