#include <iostream>
#include <string>
using namespace std;

/// getters and setter enable us to access to private contents

/// always try member variable to declare as private it will protect from modification
class Books{
public:
    void setName(string x){
    name = x;
    }
   string getName(){
   return name;
   }
 private:
    string name;
};

int main()
{
   Books book1;
   book1.setName("Chaman");
   cout<< book1.getName();

    return 0;

}
