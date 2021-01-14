#include <iostream>

using namespace std;

int main()
{
    int marks;
    cout<<"Enter Your Marks = ";
    cin>>marks;

    switch(marks)
    {

        case 100:
        case 95:
        cout<<"Excellent"<<endl;
        break;
        case 90:
        cout<<"Very Good"<<endl;
        break;
        case 80:
        cout<<"Good"<<endl;
        break;
        case 45:
        cout<<"Work Hard"<<endl;
        break;
        default:
            cout<<"Access Denied"<<endl;
            break;


    }
}
