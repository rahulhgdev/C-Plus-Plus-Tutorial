///ofstream - Stream class to write on file
///ifstream - Stream to read from file
///fstream - to both read and write form file or write into file

#include <iostream>
#include <fstream>    /// see
using namespace std;

int main()
{
    ofstream file_("Friends.txt");
   ///  file_.open("Friends.txt");     /// it is good practise to first chck whether your file is open or not than performs your cod
    if(file_.is_open()){
    file_<<"Rahul 1\n";
    file_<<"Manoj 2\n";
    file_<<"Shankar 3\n";
    file_<<"Vishal 4\n";
    }
    file_.close();   /// always close file it will flush all the characters in the file
    std::cin.get();
    return 0;
}
