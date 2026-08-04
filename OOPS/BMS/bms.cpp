#include<iostream>
using namespace std;

class BankAccount{
    private:
    string accountNumber;
    string name;
    double balance;

    public: 
    BankAccount (string accountNumber, string name, double balance) {
        this->accountNumber = accountNumber;
        this->name = name;
        this->balance = balance;

        if (balance >= 0) {
            this->balance = balance;
        }
        else {
            this->balance = 0;
        }
    }
    
    void deposit(double amount) {
    if(amount <= 0) {
        cout << "Invalid amount\n";
        return;
    }

    balance += amount;
    cout << "Deposited: " << amount << "\nCurrent Balance: " << balance << endl;
}
 
    void withdraw(double amount) {
    if(amount <= 0) {
        cout << "Invalid amount\n";
        return;
    }

    if(amount > balance) {
        cout << "Insufficient Balance\n";
        return;
    }

    balance -= amount;
    cout << "Withdrawn: " << amount << "\nCurrent Balance: " << balance << endl;
}

string getName() const {
    return name;
}   

double getBalance() const {
    return balance;
}

string getAccountNumber() const {
    return accountNumber;
}

 void displayDetails () const{
        cout << "Account Holder : " << name << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance : " << balance << endl;
    }

    void displayDetails(const string& searchAccountNumber) const {
        if (accountNumber == searchAccountNumber) {
            displayDetails();
        }
    }
};

int main() {
    BankAccount b1("4348928", "Bhavik", 4000);
    BankAccount b2("7845123", "Aman", 2500);
    BankAccount b3("9911223", "Riya", 1500);

    b1.deposit(2000);
    b1.withdraw(1000);
    b1.deposit(500);

    b2.withdraw(500);
    b2.deposit(1200);
    b2.withdraw(700);

    b3.deposit(800);
    b3.withdraw(300);
    b3.deposit(200);

    cout << b1.getName() << endl;
    cout << b1.getAccountNumber() << endl;
    cout << b1.getBalance() << endl;
    b1.displayDetails();

    cout << endl;
    cout << b2.getName() << endl;
    cout << b2.getAccountNumber() << endl;
    cout << b2.getBalance() << endl;
    b2.displayDetails();

    cout << endl;
    cout << b3.getName() << endl;
    cout << b3.getAccountNumber() << endl;
    cout << b3.getBalance() << endl;
    b3.displayDetails();

    cout << endl;
    b1.displayDetails("7845123");
    b2.displayDetails("7845123");
    b3.displayDetails("7845123");

    return 0;
}