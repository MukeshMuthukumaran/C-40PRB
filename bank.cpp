#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    BankAccount() {
        accountHolderName = "";
        accountNumber = 0;
        balance = 0.0;
    }

    BankAccount(string name, int accNum, double initialBalance) {
        accountHolderName = name;
        accountNumber = accNum;
        balance = initialBalance;
    }

    // Add getter for account number
    int getAccountNumber() const {
        return accountNumber;
    }

    void displayAccount() {
        if (accountNumber != 0) {
            cout << "\nAccount Number: " << accountNumber << endl;
            cout << "Account Holder: " << accountHolderName << endl;
            cout << "Balance: $" << balance << endl;
        }
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "\nDeposit successful!" << endl;
            cout << "New balance: $" << balance << endl;
        } else {
            cout << "\nInvalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "\nWithdrawal successful!" << endl;
            cout << "New balance: $" << balance << endl;
        } else {
            cout << "\nInsufficient balance or invalid amount!" << endl;
        }
    }
};

class Bank {
private:
    static const int MAX_ACCOUNTS = 100;
    BankAccount accounts[MAX_ACCOUNTS];
    int accountCount;

public:
    Bank() {
        accountCount = 0;
    }

    void createAccount() {
        if (accountCount >= MAX_ACCOUNTS) {
            cout << "\nBank is full! Cannot create more accounts." << endl;
            return;
        }

        string name;
        int accNum;
        double initialBalance;

        cout << "\nEnter Account Number: ";
        cin >> accNum;
        cin.ignore();
        
        cout << "Enter Account Holder Name: ";
        getline(cin, name);
        
        cout << "Enter Initial Balance: $";
        cin >> initialBalance;

        accounts[accountCount] = BankAccount(name, accNum, initialBalance);
        accountCount++;
        cout << "\nAccount created successfully!" << endl;
    }

    void displayAllAccounts() {
        if (accountCount == 0) {
            cout << "\nNo accounts in bank." << endl;
            return;
        }
        
        cout << "\n=== Bank Accounts ===" << endl;
        for (int i = 0; i < accountCount; i++) {
            accounts[i].displayAccount();
        }
    }

    BankAccount* findAccount(int accNum) {
        for (int i = 0; i < accountCount; i++) {
            if (accounts[i].getAccountNumber() == accNum) {  // Using getter method now
                return &accounts[i];
            }
        }
        return nullptr;
    }

    void makeTransaction() {
        int accNum;
        cout << "\nEnter Account Number: ";
        cin >> accNum;

        BankAccount* account = findAccount(accNum);
        if (account == nullptr) {
            cout << "\nAccount not found!" << endl;
            return;
        }

        int choice;
        double amount;

        cout << "\n1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        cout << "Enter amount: $";
        cin >> amount;

        if (choice == 1) {
            account->deposit(amount);
        } else if (choice == 2) {
            account->withdraw(amount);
        } else {
            cout << "\nInvalid choice!" << endl;
        }
    }
};

int main() {
    Bank bank;
    int choice;

    do {
        cout << "\n=== Bank Management System ===" << endl;
        cout << "1. Create New Account" << endl;
        cout << "2. Display All Accounts" << endl;
        cout << "3. Make Transaction (Deposit/Withdraw)" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                bank.createAccount();
                break;
            case 2:
                bank.displayAllAccounts();
                break;
            case 3:
                bank.makeTransaction();
                break;
            case 4:
                cout << "\nThank you for using the Bank Management System!" << endl;
                break;
            default:
                cout << "\nInvalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}