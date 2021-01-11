#include <iostream>

using namespace std;

int main()
{

    ///1 2 3
    ///3 4 5

    int myArray [2][3]={{1,2,3},{4,4,6}};  /// --- 1st


    /// convenient way to declare multidimensional array if it more than 2*3

    for(int row =0; row<2;row++)
        {
        for(int column = 0;column<3;column++)
        {
            cout<<myArray[row][column]<<" ";
        }
    cout<<endl;

    }
    /// cout<<myArray[1][2];   ---for 1st
    return 0;
}
