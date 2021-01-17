#include <iostream>

using namespace std;

int main()
{
    int x =1;
    int num=0;
    int sum=0;
    while(x<=5){       /// to make infinite loop while(1) and it is good practice to declare in some program

        cout<<"INPUT ANY VALUES "<<endl;
        cin>>num;
        sum=sum+num;  /// or sum+=num;
            x++;
    }
    cout<<"THE SUM IS = "<<sum<<endl;


}
