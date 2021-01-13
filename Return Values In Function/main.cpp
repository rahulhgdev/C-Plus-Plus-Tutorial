#include <iostream>

using namespace std;

/// notes- u have to give datatype to return to same as datatype on function

int sum(int firstno, int secno){
     int result =0;
     result =firstno+secno;
     return result;
}

int main()
{
    int multiply ;
    cout<<"ENTER MULTIPLICATION NUMBER = "<<endl;
    cin>>multiply;
    int mainResult;
    mainResult = multiply*sum(102,320);
    cout<<"Main Result  = "<<mainResult<<endl;

    ///cout<<"The Result is = "<<sum(102,320)<<endl;

    return 0;
}
