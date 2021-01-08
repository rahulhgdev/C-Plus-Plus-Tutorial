#include <iostream>
#include <string>
using namespace std;

/// Templates - Template or Templates are foundation of generic programming to make your progame generic i.e. to increase usability
/// Restriction of using TEMPLATE THAT YOU CAN NOT USE TWO DIFFERENT D

template<class chaman>   /// syntax - template<class classname>
chaman add(chaman a, chaman b)   /// here innstead of using datatype we have use class name
{
    return a+b;
}
/*/// these below codes are lenghty so we use templates
float add(float a, float b)
{
    return a+b;
}
double add(double a, double b)
{
    return a+b;
}*/

int main()
{
    /// int x= 36;
    /// int y= 46;
     /// float x= 36.54;
    /// float y= 46.12;
      int x= 36.15345;
     int y= 46.54468;
    std::cout<<add(x,y)<<std::endl;
}
