#include <iostream>
using namespace std;

// Student class
class Student {
public:
    string name;
    int marks[3]; // Array to store marks for 3 subjects

    void getDetails() {
        cout << "Enter student name: ";
        cin >> name;
        for (int i = 0; i < 3; i++) {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    double getTotal() {
        return marks[0] + marks[1] + marks[2];
    }

    double getAverage() {
        return getTotal() / 3.0;
    }

    char getGrade() {
        double avg = getAverage();

        // Using relational and logical operators to determine grade
        if (avg >= 90) return 'A';
        else if (avg >= 80 && avg < 90) return 'B';
        else if (avg >= 70 && avg < 80) return 'C';
        else if (avg >= 60 && avg < 70) return 'D';
        else return 'F'; // Fail
    }

    void displayResult() {
        cout << "\nStudent Name: " << name << endl;
        cout << "Total Marks: " << getTotal() << endl;
        cout << "Average Marks: " << getAverage() << endl;
        cout << "Grade: " << getGrade() << endl;
    }
};

// Main function
int main() {
    Student s;
    s.getDetails();
    s.displayResult();
    return 0;
}
