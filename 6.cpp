#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }

    void displayBalance() {
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    account.deposit(500);
    account.withdraw(200);
    account.displayBalance();
    return 0;
}
