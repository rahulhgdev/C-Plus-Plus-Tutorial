#include <iostream>

using namespace std;

int main()
{
    int myArray[6] = {10,11,12,13,14,15};
    int sum = 0;

    for(int i=0; i<6;i++)
    {
        sum+=myArray[i];
    }
    cout<<"sum = "<<sum<<endl;
    return 0;
}
