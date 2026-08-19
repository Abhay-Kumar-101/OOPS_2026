#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    int rollno;
    string name;
    int marks;
    int age;
    public:
    void getdata()
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
int main()
    {
        Student obj;
        obj.display();
        return 0;
    }


// structured language :

// #include <iostream>
// #include <string>
// using namespace std;

// class Student
// {
// private:
//     int rollno, marks, age;
//     string name;

// public:
//     void getdata()
//     {
//         cout << "Enter Roll Number: ";
//         cin >> rollno;

//         cout << "Enter Name: ";
//         cin >> name;

//         cout << "Enter Marks: ";
//         cin >> marks;

//         cout << "Enter Age: ";
//         cin >> age;
//     }

//     void display()
//     {
//         cout << "\nStudent Details\n";
//         cout << "Roll Number: " << rollno << endl;
//         cout << "Name: " << name << endl;
//         cout << "Marks: " << marks << endl;
//         cout << "Age: " << age << endl;

//         // if-else statement
//         if (marks >= 33)
//         {
//             cout << "Result: Pass";
//         }
//         else
//         {
//             cout << "Result: Fail";
//         }
//     }
// };

// int main()
// {  
//     Student obj;

//     obj.getdata();
//     obj.display();

//     return 0;
// }