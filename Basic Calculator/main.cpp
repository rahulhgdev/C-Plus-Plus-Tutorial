#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cout<<"ENTER 1ST VALUE = "<<endl;
    cin>>x; /// to get value from user
    cout<<"ENTER 2ND VALUE = "<<endl;
    cin>>y;
    int sum = x +y;
    int sub = x -y;
    int mul = x*y;
    float div = x/y;  /// on division the result can be float value
    int remainder = x%y;

    cout<<"SUM =\n"<<sum<<endl;
     cout<<"SUBTRACTION =\n"<<sub<<endl;
      cout<<"MULTIPLICATION =\n"<<mul<<endl;
       cout<<"DIVISION =\n"<<div<<endl;
        cout<<"REMAINDER =\n"<<remainder<<endl;
        return 0;
}
