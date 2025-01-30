#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    // Get user input
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: " << t1 << ", " << t2;

    // Loop to generate Fibonacci terms
    for (int i = 3; i <= n; i++) {
        nextTerm = t1 + t2;
        cout << ", " << nextTerm;
        t1 = t2;
        t2 = nextTerm;
    }

    cout << endl;
    return 0;
}
