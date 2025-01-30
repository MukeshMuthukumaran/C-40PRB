#include <iostream>
using namespace std;

// Calculator class
class Calculator {
public:
    double num1, num2;

    void getInput() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    double add() { return num1 + num2; }
    double subtract() { return num1 - num2; }
    double multiply() { return num1 * num2; }
    double divide() {
        if (num2 != 0)
            return num1 / num2;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

// Main function
int main() {
    Calculator calc;
    int choice;
    
    do {
        cout << "\nBasic Calculator\n";
        cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\nChoose an option: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            calc.getInput();
        }

        switch (choice) {
            case 1:
                cout << "Result: " << calc.add() << endl;
                break;
            case 2:
                cout << "Result: " << calc.subtract() << endl;
                break;
            case 3:
                cout << "Result: " << calc.multiply() << endl;
                break;
            case 4:
                cout << "Result: " << calc.divide() << endl;
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 5);

    return 0;
}
