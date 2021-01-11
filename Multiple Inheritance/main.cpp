#include <iostream>
#include <string>
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
class description
{
public:
    void print(string description_)
    {
        std::cout<<"We are using "<<description_<<" Class"<<std::endl;
    }

};
class Rectangle : public Shape , public description
{
public:
    int area(){
    return(height*width);
    }
};
class Triangle : public Shape , public description
{
    public:
    int area(){
    return (height*width/2);
    }
};

int main()
{
   Rectangle rec;
    rec.setValues(150,575);
    std::cout<<" Area of Rectangle = "<<rec.area()<<std::endl;

    Triangle tri;
    tri.setValues(156,476);
    std::cout<<"Area of Triangle = "<<tri.area()<<std::endl;
}
