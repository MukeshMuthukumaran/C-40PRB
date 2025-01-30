#include <iostream>
#include <cmath>      // For pow()
#include <iomanip>    // For manipulators
using namespace std;

// LoanEMI class
class LoanEMI {
public:
    double principal, annualRate, monthlyRate, emi;
    int tenureMonths;

    void getDetails() {
        cout << "Enter Loan Amount (₹): ";
        cin >> principal;
        cout << "Enter Annual Interest Rate (%): ";
        cin >> annualRate;
        cout << "Enter Loan Tenure (in years): ";
        cin >> tenureMonths;
        tenureMonths *= 12;  // Convert years to months
    }

    void calculateEMI() {
        monthlyRate = (annualRate / 12) / 100;  // Convert annual rate to monthly rate

        // EMI Formula
        emi = (principal * monthlyRate * pow(1 + monthlyRate, tenureMonths)) / 
              (pow(1 + monthlyRate, tenureMonths) - 1);
    }

    void displayEMI() {
        cout << "\n--- Loan EMI Details ---" << endl;
        cout << "Loan Amount   : ₹" << fixed << setprecision(2) << principal << endl;
        cout << "Annual Rate   : " << annualRate << " %" << endl;
        cout << "Tenure        : " << tenureMonths / 12 << " years (" << tenureMonths << " months)" << endl;
        cout << "Monthly EMI   : ₹" << fixed << setprecision(2) << emi << endl;
    }
};

// Main function
int main() {
    LoanEMI loan;
    loan.getDetails();
    loan.calculateEMI();
    loan.displayEMI();
    return 0;
}
