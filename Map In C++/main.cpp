#include <iostream>
#include <map>
using namespace std;

 /// Maps are associated containers that stores elements in format of key value pair
int main()
{
    std::map<int , std::string>name_map;
    name_map[1] = "Mahadev";
    name_map[2] = "Shankar";
    name_map[3] = "Bhola";
    name_map[4] = "Kedar-Natheswar / Nilkanth";

    /// std::cout<<name_map[4]<<std::endl;
    /// to insert
    name_map.insert(std::pair<int, std::string>(6,"Aadinath"));
    name_map.insert(std::pair<int, std::string>(7,"Parvati-Patti"));

    std::map<int, std::string>::iterator it = name_map.find(5);
   /// to find key
   std::cout<<"Key Found = "<<name_map.find(5)->second<<std::endl;
   ///name_map.clear; /// to clear MAP
   ///TO KNOW SIZE OF MAP
   std::cout<<"Map Size = "<<name_map.size()<<std::endl;
   /// TO CHECK WHETHER MAP IS EMPTY OR NOT IT WILL RETURN 1 OR 0
   std::cout<<"Map Size = "<<name_map.is_empty()<<std::endl;

    for(std::map<int, std::string>::iterator it - name_map.begin();it !=name_map.end;it++)
    {
        std::cout<<it->first<<" => "<<it->second<<std::endl;
    }
    return 0;
