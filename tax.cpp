#include <iostream>
using namespace std;

int main() {
    double income, tax = 0;

    // Get user income
    cout << "Enter your annual income (₹): ";
    cin >> income;

    // Calculate tax based on income slabs
    if (income <= 250000) {
        tax = 0;  // No tax
    } 
    else if (income <= 500000) {
        tax = (income - 250000) * 0.05;  // 5% tax on amount above ₹2,50,000
    } 
    else if (income <= 1000000) {
        tax = (250000 * 0.05) + (income - 500000) * 0.20;  // 5% for first ₹2,50,000, then 20%
    } 
    else {
        tax = (250000 * 0.05) + (500000 * 0.20) + (income - 1000000) * 0.30;  // 5%, 20%, then 30%
    }

    // Display the tax amount
    cout << "Total Tax Payable: ₹" << tax << endl;

    return 0;
}
