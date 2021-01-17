#include <iostream>
#include <string>
/// You can define Virtual function in base class only
/// Virtual Member Function - A VMF is a member function which can redefined derived or base class
/// A pure virtual is a member which have no definition i.e. means you dont't need to write any code in rectangle class after public
/// if u define a pure virtual function in  your base class need to redifined to member function in your derive class otherwise it will give an error
using namespace std;
class Shape
{
public:
    void setValues(int a, int b)
    {
        width =a;
        height=b;
    }
    virtual int  area()    /// declaration of vmf the use of vmf is that u can redefine function
    {
       return 0;
    }
   /// virtual int area() = 0; /// declaration of a pure virtual function
protected:
    int height;
    int width;
};
class Rectangle : public Shape
{
public:
    int area(){
    return(height*width);
    }
};
class Triangle : public Shape
{
    public:
    int area(){
    return (height*width/2);
    }
};

int main()
{
    Rectangle rec;
    Triangle tri;
   /// Shape poly;
    Shape *poly1=&rec;
    Shape *poly2=&tri;
   /// Shape *poly3 = &poly;
    poly1->setValues(10,20);
    poly2->setValues(10,20);
    ///poly3->setValues(10,20);
    std::cout<<rec.area()<<std::endl;
    std::cout<<tri.area()<<std::endl;
    ///std::cout<<poly.area()<<std::endl;
}
