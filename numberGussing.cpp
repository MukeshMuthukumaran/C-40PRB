#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()
using namespace std;

int main() {
    srand(time(0));  // Seed random number generator
    int randomNumber = rand() % 100 + 1; // Generate a number between 1 and 100
    int userGuess, attempts = 0;

    cout << "🎮 Welcome to the Number Guessing Game!" << endl;
    cout << "Guess a number between 1 and 100: " << endl;

    while (true) {  // Infinite loop until correct guess
        cin >> userGuess;
        attempts++;

        if (userGuess == randomNumber) {
            cout << "🎉 Correct! You guessed the number in " << attempts << " attempts.\n";
            break;
        } 
        else if (userGuess > randomNumber) {
            cout << "🔼 Too High! Try again: ";
        } 
        else {
            cout << "🔽 Too Low! Try again: ";
        }
    }

    return 0;
}
