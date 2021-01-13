///ofstream - Stream class to write on file
///ifstream - Stream to read from file
///fstream - to both read and write form file or write into file

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    std::string line_;
    int id;            /// to read customary data
    std::string name;    /// to read customary data
    int age;                 /// to read customary data
    ifstream file_("Friends.txt");
    if(file_.is_open())
    {
        /// while(getline(file_,line_))
        while(file_>> id >> name >>age)             /// to read customary data
        {
           /// std::cout<<line_<<'\n';
           std::cout<<id<<" "<<name<<" "<<age<<'\n';        /// to read customary data
        }
        file_.close();
    }
    else
        std::cout<<"file is not open"<<'\n';

    std::cin.get();
    return 0;
}
