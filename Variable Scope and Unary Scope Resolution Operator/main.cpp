#include <iostream>

using namespace std;
int myGlobalVariable = 200;


int main()
{
    /// variable scope - if u want to access a variable from one function to another u have to declare it as global variable
    /// Unary Scope res. ope. - if u give same variable no. in both local and global it will print local variable and to print the global variable u need give scope resolution operator i.e. ::
    int myGlobalVariable =20;
    cout<<::myGlobalVariable;  ///  ::
    return 0;

}
