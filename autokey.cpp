// Program 3: Range Based loop using Auto Keyword

#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};

    for (auto x : arr) {
        cout << x << " ";
    }

    return 0;
}




// Program 4: Program to show all Constructor type and then destroy that :

#include <iostream>
#include <string>
using namespace std;

class Student {
    int id;
    string name;

public:
    // 1. Default Constructor
    Student() {
        id = 0;
        name = "Unknown";
        cout << "Default Constructor called\n";
    }

    // 2. Parameterized Constructor
    Student(int i, string n) {
        id = i;
        name = n;
        cout << "Parameterized Constructor called\n";
    }

    // 3. Copy Constructor
    Student(const Student &obj) {
        id = obj.id;
        name = obj.name;
        cout << "Copy Constructor called\n";
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for ID: " << id << endl;
    }
};

int main() {

    Student s1;                  // Default Constructor

    Student s2(101, "Archit");   // Parameterized Constructor
    s2.display();

    Student s3 = s2;             // Copy Constructor
    s3.display();

    return 0;                    // Destructor automatically called
}