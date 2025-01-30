#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "---- 🚦 Traffic Light System ----" << endl;
    cout << "1. Red Light" << endl;
    cout << "2. Yellow Light" << endl;
    cout << "3. Green Light" << endl;
    cout << "4. Exit" << endl;

    cout << "\nEnter your choice (1-4): ";
    cin >> choice;

    // Using switch-case for Traffic Light System
    switch (choice) {
        case 1:
            cout << "🔴 Red Light - STOP!" << endl;
            break;
        case 2:
            cout << "🟡 Yellow Light - GET READY!" << endl;
            break;
        case 3:
            cout << "🟢 Green Light - GO!" << endl;
            break;
        case 4:
            cout << "Exiting Traffic Light System. Drive Safe! 🚗💨" << endl;
            break;
        default:
            cout << "Invalid choice! Please enter a valid option (1-4)." << endl;
    }

    return 0;
}
