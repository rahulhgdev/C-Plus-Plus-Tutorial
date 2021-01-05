#include <iostream>

using namespace std;

class Books{
public:
    int Id = 2;
    void printBookId()
    {
    cout<<"The Book Id is = "<<Id<<endl;
    }

};
int main()
{

    /// Class  - A Class is collection of related data and function under a single name
    /// Object is variable whose datatype is class
    /// A C++ program contains 100s of function and accordingly functions
    /// are declared in class  and a function contains lots of m=variable and statements


    Books book1;  /// object declaration
    book1.printBookId();
    cout<<book1.Id<<endl; /// since it is public
    return 0;
}
