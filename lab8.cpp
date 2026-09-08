// write a program to object as arguments and return object form function to perform operations on user defined data.

#include <iostream>
using namespace std;
class B
{
private:
    int Marks;

public:
    void setMarks(int m)
    {
        Marks = m;
    }
    void compare(B s)
    {
        if (Marks > s.Marks)
        {
            cout << "The argumented objects has less marks ." << endl;
        }
        else
        {
            cout << "The argumented object has greater marks ."<< endl;
        }
    }
};
int main()
{
    B s1, s2;
    s1.setMarks(10);
    s2.setMarks(20);
    s1.compare(s2);
}
