#include <iostream>

using namespace std;

int main()
{
    /// Pointer- Pointer is a variable whose value is address of other variable

    int var = 120;
    /// var = 20;  /// if u declare another variable with same name then only value changed but address remains same
    cout<<&var<<endl;



    /// to declare pointer syntax - datatype *variable name = value;
    int *intP;
    intP = &var;

    var = 20;
    cout<<intP<<endl;
    cout<<*intP<<endl;   /// to access value stored in variable

    return 0;
}


