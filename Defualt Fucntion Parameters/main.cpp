#include <iostream>


using namespace std;

int sum(int firsno = 130, int secno = 510){
    int result = 0;
    result = firsno+secno;
    return result;

    }

int main()
{

    /// if u are doing function prototyping u don't need to declare value at main point u can declare the value at the function-protoyping above main function
    cout<<sum(); /// function overwritten

    return 0;
}
