#include <iostream>

using namespace std;

int main()
{
    /// Arrays -  It is a variable which can store more than 1 value on same type

    int myArray[3] = {10,20,30};
    /// to assign value of an array in different manner
    int myArray2[3];
    myArray2[0] = 40;
    myArray2[1] = 50;
    myArray2[2] = 60;
    cout<<myArray[0];
    cout<<myArray2[2];
    /// to initialize array with for loop

    int myArray3[15];

    for(int i = 0; i<=14; i++){
        myArray3[i]=67;

        cout<<i<<"---------"<<myArray3[i]<<endl;
    }

    return 0;
}
