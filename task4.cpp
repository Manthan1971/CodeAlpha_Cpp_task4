#include <iostream>
using namespace std;

int main() {
    string name;
    int accNum = 1001;
    double balance = 0.0;
    int choice;
    double amount;

    cout << "Enter your name: ";
    getline(cin, name);

    while (true) {
        cout << "\n--- BANK MENU ---\n";
        cout << "1. View Balance\n2. Deposit\n3. Withdraw\n0. Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Account #" << accNum << " | " << name << " | Balance: $" << balance << endl;
                break;
            case 2:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance += amount;
                cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
                break;
            case 3:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient funds!\n";
                } else {
                    balance -= amount;
                    cout << "Withdrew $" << amount << ". New balance: $" << balance << endl;
                }
                break;
            case 0:
                cout << "Goodbye, " << name << "!\n";
                return 0;
            default:
                cout << "Invalid option.\n";
        }
    }

    return 0;
}
