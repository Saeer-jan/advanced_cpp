// Encapsulation in C++ = Putting data & methods inside a class + 
//using access specifiers (private/public) to protect data and give controlled access through methods.



#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // private data - cannot access directly outside class

public:
    // Constructor
    BankAccount(double initialBalance) {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    // Setter method (controls how data is modified)
    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
        else
            cout << "Invalid deposit amount!" << endl;
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance)
            balance -= amount;
        else
            cout << "Invalid withdraw amount or insufficient funds!" << endl;
    }

    // Getter method (controls how data is accessed)
    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account(1000);   // object created with 1000 initial balance

    account.deposit(500);        // allowed through method
    account.withdraw(200);       // allowed through method

    cout << "Current Balance: " << account.getBalance() << endl;

    // account.balance = 99999;  ? Not allowed (balance is private)
    return 0;
}
