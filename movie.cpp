#include <iostream>
using namespace std;

int main() {
    int age, price;

    // Get user's age
    cout << "Enter your age: ";
    cin >> age;

    // Use conditional (ternary) operator to determine ticket price
    price = (age >= 13) ? 150 : 100;

    // Display ticket price
    cout << "Your movie ticket price is: ₹" << price << endl;

    return 0;
}
