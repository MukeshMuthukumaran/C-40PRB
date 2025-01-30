#include <iostream>
using namespace std;

// VotingEligibility class
class VotingEligibility {
public:
    string name;
    int age;

    void getDetails() {
        cout << "Enter Your Name: ";
        cin >> name;
        cout << "Enter Your Age: ";
        cin >> age;
    }

    void checkEligibility() {
        if (age >= 18)
            cout << "\nHello, " << name << "! You are eligible to vote. 🗳️" << endl;
        else
            cout << "\nSorry, " << name << ". You are not eligible to vote. You need to wait " 
                 << (18 - age) << " more year(s). ❌" << endl;
    }
};

// Main function
int main() {
    VotingEligibility voter;
    voter.getDetails();
    voter.checkEligibility();
    return 0;
}
