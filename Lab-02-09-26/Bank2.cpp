#include <iostream>
using namespace std;
class BankAccount
{
private:
    int accountNumber;
    int pin;
    string name;
    double balance;
public:
    BankAccount(int accNo, int p, string n, double b)
    {
        accountNumber = accNo;
        pin = p;
        name = n;
        balance = b;
    }
    bool verifyPin(int p)
    {
        return pin == p;
    }
    void deposit(double amount)
    {
        if(amount > 0)
        {
            balance += amount;
            cout << "Amount deposited successfully\n";
        }
    }
    void withdraw(double amount)
    {
        if(amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Please collect your cash\n";
        }
        else
            cout << "Insufficient balance\n";
    }
    void checkBalance()
    {
        cout << "Available Balance: " << balance << endl;
    }
    void displayAccount()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main()
{
    BankAccount account(12345, 1234, "Aryan", 10000);
    int enteredPin, choice;
    double amount;
    cout << "Enter PIN: ";
    cin >> enteredPin;
    if(!account.verifyPin(enteredPin))
    {
        cout << "Invalid PIN";
        return 0;
    }
    do
    {
        cout << "\n1. Check Balance";
        cout << "\n2. Deposit";
        cout << "\n3. Withdraw";
        cout << "\n4. Account Details";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;
        switch(choice)
        {
            case 1:
                account.checkBalance();
                break;
            case 2:
                cout << "Enter amount: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case 3:
                cout << "Enter amount: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 4:
                account.displayAccount();
                break;
            case 5:
                cout << "Thank you for using ATM";
                break;
            default:
                cout << "Invalid choice";
        }
    }while(choice != 5);
    return 0;
}

