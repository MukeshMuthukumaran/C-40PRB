#include <iostream>
#include <string>
using namespace std;

class Patient {
    public:
        string name;
        int age;
        string disease;

        // Member function to get patient details
        void getPatientDetails() {
            cout << "Enter patient name: ";
            cin >> name;
            cout << "Enter patient age: ";
            cin >> age;
            cout << "Enter patient disease: ";
            cin >> disease;
        }

        // Member function to display patient details
        void displayPatientDetails() {
            cout << "\nPatient Details: \n";
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Disease: " << disease << endl;
        }
};

int main() {
    int n;

    // Ask for the number of patients
    cout << "Enter number of patients: ";
    cin >> n;

    // Array of Patient objects
    Patient patients[n];

    // Input and display patient records
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for patient " << i+1 << ": \n";
        patients[i].getPatientDetails();
        patients[i].displayPatientDetails();
    }

    return 0;
}
