#include <iostream>

using namespace std;

void sum(int firstno, int secno)
{
    cout<<"sum of integers are = "<<firstno+secno<<endl;
}
void sum(float firstno, float secno)
{
    cout<<"sum of floats are = "<<firstno+secno<<endl;
}
int main()
{
    float x = 21.354,y=51.54;
    sum(x,y);

    int a = 12,b = 35;
    sum(a,b);
    return 0;
}
