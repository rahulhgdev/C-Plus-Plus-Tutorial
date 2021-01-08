#include <iostream>
#include <string>
using namespace std;

/// Inheritance allow us to define a class in terms of another class
class Shape
{
public:
    void setValues(int a, int b)
    {
        width =a;
        height=b;
    }
protected:
    int height;
    int width;
};
class Rectangle : public Shape        /// inheriting from shape class(base class)
{
public:
    int area(){
    return(height*width);    /// inheritance allow us to reuse base class member variables which is either public or protected
    }
};
class Triangle : public Shape        /// inheriting from shape class(base class)
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
   rec.setValues(15,10);
   tri.setValues(15,10);
   std::cout<<"area of rectangle = "<<rec.area()<<std::endl;
   std::cout<<"area of triangle = "<<tri.area()<<std::endl;
}
