// #include <iostream>
// using namespace std;
// class std{
//     private :  
//     string name;
//     int roll;
//     int marks;
//     int phone;
//     string branch;
//     string email;
//     void getdata(){
        
//         cout<<"Enter your name\n ";
//         cin>>name;
//         cout<<"Enter your roll number\n" ;
//         cin>>roll;
//         cout<<"Enter your marks\n";
//         cin>>marks;
//         cout<<"Enter phone number\n";
//         cin>>phone;
//         cout<<"Enter your Branch\n";
//         cin>>branch;
//         cout<<"Enter email address\n";
//         cin>>email;

//     }
// };
// class exam : public std{
//     friend void show(){


//     }

// };

// - `Student` is the base class for student details.
// - `Exam` inherits `Student` and uses a friend function to show pass/fail.
// - `Library` inherits `Exam` and stores book details.
// - This is multilevel inheritance: `Student → Exam → Library`.
// - `protected` lets child classes use student data.
// - `Library student[MAX]` is an array of objects for multiple students.
// - `for` loops are used to enter and display all student records.

#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name, phone, branch, email;
    int roll;
    float marks;

public:
    void inputStudent() {
        cout << "\nEnter name: ";
        getline(cin >> ws, name);

        cout << "Enter roll number: ";
        cin >> roll;

        cout << "Enter marks: ";
        cin >> marks;

        cout << "Enter phone number: ";
        cin >> phone;

        cout << "Enter branch: ";
        cin >> branch;

        cout << "Enter email: ";
        cin >> email;
    }

    void displayStudent() {
        cout << "\nName       : " << name;
        cout << "\nRoll No.   : " << roll;
        cout << "\nMarks      : " << marks;
        cout << "\nPhone No.  : " << phone;
        cout << "\nBranch     : " << branch;
        cout << "\nEmail      : " << email;
    }
};

class Exam : public Student {
public:
    // Friend function declaration
    friend void showExamResult(Exam e);
};

class Library : public Exam {
private:
    string bookName;
    int bookId;

public:
    void inputLibrary() {
        inputStudent();

        cout << "Enter library book name: ";
        getline(cin >> ws, bookName);

        cout << "Enter book ID: ";
        cin >> bookId;
    }

    void displayLibrary() {
        displayStudent();
        cout << "\nBook Name  : " << bookName;
        cout << "\nBook ID    : " << bookId;
        cout << "\n";
    }
};

// Friend function of Exam class
void showExamResult(Exam e) {
    cout << "\nExam Result: ";

    if (e.marks >= 40)
        cout << "Pass";
    else
        cout << "Fail";

    cout << "\n";
}

int main() {
    const int MAX = 50;
    Library student[MAX];   // Array of objects
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    if (n < 1 || n > MAX) {
        cout << "Invalid number of students.";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "\n--- Enter Student " << i + 1 << " Details ---";
        student[i].inputLibrary();
    }

    cout << "\n\n===== STUDENT RECORDS =====\n";

    for (int i = 0; i < n; i++) {
        cout << "\n--- Student " << i + 1 << " ---";
        student[i].displayLibrary();

        // Library inherits Exam, so it can be passed to Exam friend function
        showExamResult(student[i]);
    }

    return 0;
}