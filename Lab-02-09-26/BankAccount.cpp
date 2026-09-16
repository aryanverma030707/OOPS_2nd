#include <iostream>
using namespace std;
class BankAccount
{
private:
    double balance;
public:
    BankAccount(double b)
    {
        balance = b;
    }
    void deposit(double amount)
    {
        if(amount > 0)
            balance += amount;
    }
    void withdraw(double amount)
    {
        if(amount > 0 && amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance" << endl;
    }
    void display()
    {
        cout << "Balance: " << balance << endl;
    }
};
int main()
{
    BankAccount account(5000);
    account.deposit(2000);
    account.withdraw(1500);
    account.display();
    return 0;
}