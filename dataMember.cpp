// create a class std with data member name &marks
// create a member function setdata(string name, int marks) and use this pointer to start the data member
#include <iostream>
using namespace std;
class B{
    private:
    int m;
    public:
    int setdata(string name, int marks){
       this-> m=marks;
        this-> n=name;
    }

}