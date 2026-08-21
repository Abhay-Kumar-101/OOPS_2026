//Design a class to represent a bank account with proper Data hiding and memeber function for deposit and withdrawal operation.
#include <iostream>
using namespace std;

class Bank
{
private:
    int amount;

public:
    Bank()
    {
        amount = 0;
    }

    void deposit(int x)
    {
        amount = amount + x;
    }

    void withdraw(int y)
    {
        if (y <= amount)
            amount = amount - y;
        else
            cout << "Insufficient Balance" << endl;
    }

    void show()
    {
        cout << "Balance = " << amount << endl;
    }
};

int main()
{
    Bank b;

    b.deposit(1000);
    b.show();

    b.withdraw(300);
    b.show();

    return 0;
}

