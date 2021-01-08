#include <iostream>

using namespace std;

int main()
{
    int age;
    int height;
    cout<<"PLEASE ENTER YOUR AGE = "<<endl;
    cin>>age;
    cout<<"PLEASE ENTER YOUR HEIGHT= "<<endl;
    cin>>height;

    if(age==20 || height>100){
    cout<<"THE AGE AND HEIGHT IS  CORRECT"<<endl;
    }
    else if (age==20 && height>=150){
          cout<<"THE AGE AND HEIGHT IS NOT CORRECT"<<endl;

    }
    else{
        return 0;

    }
}
