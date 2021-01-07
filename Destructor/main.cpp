#include <iostream>

using namespace std;

/// Destructor is used to release resources from other variables and classes
class Books{
public:
    Books()
    {
       cout<<"We are in Constructor"<<endl;
    };
    ~Books()
    {
        cout<<"We are in Destructor"<<endl;
    };
};
int main()
{
    Books book1;
    cout<<"We are in 1"<<endl;
    cout<<"We are in 2"<<endl;
    cout<<"We are in 3"<<endl;
    return 0;
}
