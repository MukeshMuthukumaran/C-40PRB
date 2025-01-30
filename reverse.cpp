#include <iostream>
using namespace std;

int main() {
    int number, reversedNumber = 0, remainder;

    // Get user input
    cout << "Enter a number: ";
    cin >> number;

    // Use for-loop to reverse the number
    for (; number != 0; number /= 10) {
        remainder = number % 10;  // Get the last digit
        reversedNumber = reversedNumber * 10 + remainder;  // Build the reversed number
    }

    // Display reversed number
    cout << "Reversed Number: " << reversedNumber << endl;

    return 0;
}
