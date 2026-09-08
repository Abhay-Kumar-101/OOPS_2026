#include <iostream>
using namespace std;

class Student
{
private:
    int marks;

    // Static member - shared by all objects
    static int totalStudents;

public:
    Student(int m)
    {
        marks = m;
        totalStudents++;
    }

    // Friend function
    friend void showDetails(Student s);
};

// Definition of static member
int Student::totalStudents = 0;

// Friend function
void showDetails(Student s)
{
    cout << "Marks: " << s.marks << endl;
    cout << "Total Students: " << Student::totalStudents << endl;
}

int main()
{
    Student s1(85);
    Student s2(90);
    Student s3(78);

    showDetails(s1);

    return 0;
}