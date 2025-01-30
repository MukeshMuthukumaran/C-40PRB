#include <iostream>
using namespace std;

int main() {
    const int correctPIN = 1234; // Set correct PIN
    int userPIN, attempts = 0;
    
    do {
        cout << "Enter your 4-digit ATM PIN: ";
        cin >> userPIN;
        attempts++;

        if (userPIN == correctPIN) {
            cout << "✅ PIN Verified! Access Granted.\n";
            break;
        } else {
            cout << "❌ Incorrect PIN! Attempts left: " << (3 - attempts) << endl;
        }

    } while (attempts < 3);

    if (userPIN != correctPIN) {
        cout << "🚫 Too many failed attempts! Your account is locked.\n";
    }

    return 0;
}

