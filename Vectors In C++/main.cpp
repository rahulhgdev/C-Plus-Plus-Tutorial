#include <iostream>
#include <vector>     /// see
using namespace std;
/// Vector is a sequential container same as an array and difference between simple array and vector
/// it is deficult to change size of simple array dinamically which is not in the case of vector
int main()
{
    std::vector<int> myvec;
    myvec.push_back(10);
    myvec.push_back(20);
    myvec.push_back(30);
    myvec.push_back(40);
    myvec.push_back(50);

    cout<<"Vector size = "<<myvec.size()<<endl;

    myvec.erase(myvec.begin());   /// to erase value of 1st or to delete specific value from start myvec.erase(myvec.begin() + indexno for eg. 3);
    /// similarily u can use
    myvec.erase(myvec.end());   /// to erase value of last or to delete specific value from start myvec.erase(myvec.begin() + indexno for eg. 3);
    ///myvec.erase(remove(myvec.begin(),myvec.end(),30),myvec.end()));
    myvec.clear();
    cout<<endl<<endl;

///    cout<<"Is Vector empty "<<myvec.empty)<<endl;   /// it will give 1 or 0

    for(int i = 0; i<myvec.size();i++)
///        cout<<"Vector " <<i<<" "<myvec.at(i)<<endl;]

        return 0;
}
