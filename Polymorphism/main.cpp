#include <iostream>

/// Polymorphism means a class have many form for eg. one tym it act as rectangle and 2nd tym as triangle
/// To use polymorphism you have to have hairarchy of class in terms of inheritance
/// in below eg. our Shape instants has rectangle form one place and triangle form at another place

using namespace std;
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

    Shape *poly1=&rec;
    Shape *poly2=&tri;
    poly1->setValues(10,20);
    poly2->setValues(10,20);

    std::cout<<rec.area()<<std::endl;
    std::cout<<tri.area()<<std::endl;
}
