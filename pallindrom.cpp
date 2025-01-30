#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a word or number to check if it's a palindrome: ";
    cin >> input;

    int start = 0;
    int end = input.length() - 1;
    bool isPalindrome = true;

    // Use loop to check if the string is palindrome
    while (start < end) {
        if (input[start] != input[end]) {
            isPalindrome = false;  // Not a palindrome
            break;
        }
        start++;
        end--;
    }

    // Display result
    if (isPalindrome) {
        cout << "✅ The entered string is a palindrome." << endl;
    } else {
        cout << "❌ The entered string is NOT a palindrome." << endl;
    }

    return 0;
}
