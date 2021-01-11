#include <iostream>

using namespace std;

void passByValue(int val){
    val = 100;

}
void passByRefrence(int *val){
    *val = 100;

}

int main()
{
    int x = 20;
    int y = 20;

    passByValue(x);
    cout<<x<<endl;

    passByRefrence(&y);       /// see this line carefully it is &y not jst y
    cout<<y<<endl;
    return 0;
}
