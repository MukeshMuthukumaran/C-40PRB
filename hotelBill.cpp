#include <iostream>
using namespace std;

int main() {
    int choice, quantity;
    double total = 0;

    cout << "---- 🍛 Tamil Nadu Restaurant Menu ----" << endl;
    cout << "1. Idli           - ₹10 per piece" << endl;
    cout << "2. Dosa           - ₹40 per piece" << endl;
    cout << "3. Pongal         - ₹50 per plate" << endl;
    cout << "4. Sambar Rice    - ₹60 per plate" << endl;
    cout << "5. Filter Coffee  - ₹30 per cup" << endl;
    cout << "6. Exit" << endl;

    while (true) {
        cout << "\nEnter your choice (1-6): ";
        cin >> choice;

        if (choice == 6) {
            cout << "\nThank you for visiting! Your total bill is ₹" << total << endl;
            break;
        }

        cout << "Enter quantity: ";
        cin >> quantity;

        switch (choice) {
            case 1: total += 10 * quantity; break;
            case 2: total += 40 * quantity; break;
            case 3: total += 50 * quantity; break;
            case 4: total += 60 * quantity; break;
            case 5: total += 30 * quantity; break;
            default: cout << "Invalid choice! Please select a valid option." << endl;
        }
    }

    return 0;
}
