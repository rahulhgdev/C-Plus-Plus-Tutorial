#include <iostream>

using namespace std;
///We know that we cannot use private or protected members outside the class

class MyClass
{
 friend class MyAnotherClass;
 private:
     int secret=10;  /// if u don't set value than it will show random value
};
class MyAnotherClass{
public:
    void showSecret(MyClass myc)
    {
        myc.secret++;
        std::cout<<myc.secret<<std::endl;
    }
};
int main()
{
    MyAnotherClass mac;
    MyClass myc;
    mac.showSecret(myc);
}
