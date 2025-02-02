#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void guessTheNumber() {
    // Generate a random number between 1 and 100
    srand(time(0)); // Seed the random number generator with the current time
    int numberToGuess = rand() % 100 + 1;

    int userGuess;
    cout << "Welcome to the Guess the Number game!" << endl;
    cout << "I have chosen a number between 1 and 100. Try to guess it!" << endl;

    // Start the guessing loop
    do {
        // Ask the user for their guess
        cout << "Enter your guess: ";
        cin >> userGuess;

        // Provide feedback based on the guess
        if (userGuess < numberToGuess) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > numberToGuess) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the number " << numberToGuess << " correctly!" << endl;
        }
    } while (userGuess != numberToGuess); // Repeat until the user guesses correctly
}

int main() {
    guessTheNumber(); // Start the game
    return 0;
}
