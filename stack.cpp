#include <iostream>
#include <stack>
using namespace std;

class Stack
{
private:
    int stack[5];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(int value)
    {
        if (top == 4)
            cout << "Stack Overflow" << endl;
        else
        {
            top++;
            stack[top] = value;
        }
    }

    void pop()
    {
        if (top == -1)
            cout << "Stack Underflow" << endl;
        else
            cout << "Deleted: " << stack[top--] << endl;
    }

    void peek()
    {
        if (top == -1)
            cout << "Stack is Empty" << endl;
        else
            cout << "Top Element: " << stack[top] << endl;
    }
};

int precedence (char op){
    if (op=='+'|| op=='-')   return 1;
    if (op=='*'|| op=='/')   return 2;
    if (op=='^')   return 3;
}
string fun(string infix){
    string postfix;
    stack <char>st;
    // for (int i=0;i<infix)    

}

int main(){
    Stack s;
    s.push(10);
    s.push(20); 
    s.push(30);
    s.peek();
    s.pop();
}
    

    