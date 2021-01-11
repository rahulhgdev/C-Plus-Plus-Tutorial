#include <iostream>

using namespace std;
void sum(int firstNo, int secNo){
    cout<<"The Sum of given No. is = "<<(firstNo+secNo)<<endl;
}
int main()
{
    int a,b;
    cout<<"Please enter 1st no. = "<<endl;
    cin>>a;
     cout<<"Please enter 2nd no. = "<<endl;
    cin>>b;

    sum(a,b);
    ///sum(401,450);
    return 0;

}
