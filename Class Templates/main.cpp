#include <iostream>
#include <string>
using namespace std;

template<class T>
class Maths{
    T a,b;
public:
        Maths(T x, T y){
        a=x;
        b=y;
        }
        T maxValue();
};
/// Below class member function implemention


template<class T>   /// don't forget to give this line above class member function implemention
T Maths<T>::maxValue(){  ///<T> tells c++ that we are member function of the class with this i.e. <T>

    return (a>b?a:b);

}

int main()
{
    Maths<double> mat(45.565,67.5478); /// don't forget to give -> <T> replaced to <datatype> at tym of object creation otherwise it will give unknown erroe
    cout<<mat.maxValue();
}
