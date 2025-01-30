#include <iostream>
using namespace std;

// Employee class
class Employee {
public:
    string name;
    double basicSalary, hra, da, pf, grossSalary, netSalary;

    void getDetails() {
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    void calculateSalary() {
        hra = basicSalary * 0.20;  // HRA = 20% of Basic Salary
        da = basicSalary * 0.10;   // DA = 10% of Basic Salary
        pf = basicSalary * 0.08;   // PF = 8% of Basic Salary

        grossSalary = basicSalary + hra + da;
        netSalary = grossSalary - pf;
    }

    void displaySalarySlip() {
        cout << "\n--- Employee Salary Slip ---" << endl;
        cout << "Employee Name   : " << name << endl;
        cout << "Basic Salary    : $" << basicSalary << endl;
        cout << "HRA (20%)       : $" << hra << endl;
        cout << "DA (10%)        : $" << da << endl;
        cout << "PF (8%)         : $" << pf << endl;
        cout << "Gross Salary    : $" << grossSalary << endl;
        cout << "Net Salary      : $" << netSalary << endl;
    }
};

// Main function
int main() {
    Employee emp;
    emp.getDetails();
    emp.calculateSalary();
    emp.displaySalarySlip();
    return 0;
}
