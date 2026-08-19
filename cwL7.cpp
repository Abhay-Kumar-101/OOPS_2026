// Base class/super class -> sub class
#include <iostream>
using namespace std;
class Student{
    private:
    int rollno;
    string name;
    int marks;
    int age;
    public:void getdata()
    {
        cout << "Enter your roll number: ";
        cin >> rollno;
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your marks: ";
        cin >> marks;
        cout << "Enter your age: ";
        cin >> age;
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
class derive: public Student{
    private:
      int uni;
      string gen;
    public:
    public:void getdata()
    {
        cout << "Enter your university roll number: ";
        cin >> uni;
        cout << "Enter your gender: ";
        cin >> gen;
        
    }
    void display2()
    {
        getdata();
        cout << "University roll Number: " << uni << endl;
        cout << " Gender: " << gen << endl;
       
        
    } 

};
int main(){
    Student obj;
    obj.display();
    derive obj2;
    obj2.display2();



}

