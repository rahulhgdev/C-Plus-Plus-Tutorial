#include <iostream>

using namespace std;

int main()


{
    int x = 1;
    int num = 0;
    int sum = 0;

    do{
        cout<<"input any values "<<endl;
        cin>>num;
        sum = sum +num;
        x++;
    }while(x<1);       ///it will display result once even condition is false
    cout<<"The Sum is = "<<sum<<endl;
    return 0;

}
