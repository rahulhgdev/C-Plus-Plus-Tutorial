#include <iostream>
#include <string>
using namespace std;

class Vector
{
public:
    int x,y;
    Vector() {};
    Vector (int a, int b){
    x=a;
    y=b;
    }
    Vector operator+(const Vector&);
};
Vector Vector::operator+(const Vector& parameter){
    Vector temp;
    temp.x=x+parameter.x;
    temp.y=y+parameter.y;
    return temp;
}

int main()
{
    Vector vec1(4,2);
    Vector vec2(4,2);
    Vector result;
    result = vec1+vec2;

    cout<<"The Result is ("<<result.x<<","<<result.y<<")"<<endl;
    int x = 2, y = 3;
    int z = x+y;
    return 0;

}
