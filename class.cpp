#include <iostream>
using namespace std;
class B{
    public{

    
    auto name;
    auto roll;
    auto marks;
    auto date;
   }
   void getdata{
    cout<<"Enter your name";
    cin>>name;
    cout<<"enter your roll";
    cin>>roll;
    cout<<"enter your marks";
    cin>>marks;
    cout<<"enter date";
    cin>>date;

   }
   void display()
    {
        getdata();
        cout << "Roll Number: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "Age: " << age << endl;
    } 
};
int main(){
    B obj;
    // obj.display();
    

}