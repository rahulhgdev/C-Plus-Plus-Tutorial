#include <iostream>
#include <string>
using namespace std;

/// Speicialization means you can redefines your class for some particular datatype

template<class T>
class charFinder{
public:
    charFinder(T a){
    cout<<a<<" is not a valid char"<<endl;
    }
};
template<>   /// just left blank and it will tells c++ that this class make a specialization of other class
class charFinder<char>{ /// if u are leaving blank in the bracket than you have to give <char> otherwise it will give error
public:
    charFinder(char a){                 /// (T a)  changes to (char a)
    cout<<a<<" is not a valid char"<<endl;
    }
};
int main()
{
    charFinder<char> cha1('A');
    charFinder<int> cha2(45);
    charFinder<float> cha3(45.68);
}
