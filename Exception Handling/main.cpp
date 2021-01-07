#include <iostream>
#include <string>
#include <exception>


/// Exception - An exception is a situation or unwanted which can rise during execution of program
using namespace std;

int main()
{
    try{
    std::cout<<"Please Enter Age = "<<std::endl;
    int age = 0;
    std::cin>>age;
    if(age>100 || age <0){
        throw 100;       /// you can show character too then you have to declare as (char e)
        }
    }catch(std::exception e){        /// standard exception handeling
    std::cout<<"Some Exception Occured , Error No"<<e.what()<<std::endl;    ///e.what to show exception

    }
    }catch(int e){
    std::cout<<"Some Exception Occured , Error No"<<e<<std::endl;

    }
    }catch(char e){
    std::cout<<"Some Exception Occured , Error Char"<<e<<std::endl;

    }
     }catch(...){
    std::cout<<"Unknown Exception"<<e<<std::endl;   ///Undefined Exception it is use when u don't know which exception ocuurs

    }
}
