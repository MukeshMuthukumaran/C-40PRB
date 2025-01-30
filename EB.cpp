#include <iostream>
#include <iomanip> // For manipulators
using namespace std;

// ElectricityBill class
class ElectricityBill {
public:
    string consumerName;
    int units;
    double billAmount;

    void getDetails() {
        cout << "Enter Consumer Name: ";
        cin >> consumerName;
        cout << "Enter Units Consumed: ";
        cin >> units;
    }

    void calculateBill() {
        // Tariff rates
        if (units <= 100)
            billAmount = units * 1.50;  // ₹1.50 per unit for first 100 units
        else if (units <= 300)
            billAmount = (100 * 1.50) + ((units - 100) * 2.00);  // ₹2.00 per unit for next 200 units
        else
            billAmount = (100 * 1.50) + (200 * 2.00) + ((units - 300) * 3.00);  // ₹3.00 per unit beyond 300 units
    }

    void displayBill() {
        cout << "\n--- Electricity Bill ---" << endl;
        cout << left << setw(20) << "Consumer Name" << ": " << consumerName << endl;
        cout << left << setw(20) << "Units Consumed" << ": " << units << " units" << endl;
        cout << left << setw(20) << "Bill Amount" << ": ₹" << fixed << setprecision(2) << billAmount << endl;
    }
};

// Main function
int main() {
    ElectricityBill bill;
    bill.getDetails();
    bill.calculateBill();
    bill.displayBill();
    return 0;
}
