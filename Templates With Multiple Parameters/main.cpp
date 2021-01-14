#include <iostream>
#include <string>

/// as u can not pass different datatypes in your function to overcome this i.e. means to use different datatype we have to pass multiple parameters to templates
using namespace std;
template <class mytemplate1 , class mytemplate2>
mytemplate1 Max(mytemplate1 a, mytemplate2 b)  /// passing multiple param. to temlates
{
    return (a>b?a:b);  /// ternary ie. condition ? true : false
}
int main()
{
    int x= 36.5445646;
    double y=45.4564798;
    std::cout<<Max(x,y)<<std::endl;
}
