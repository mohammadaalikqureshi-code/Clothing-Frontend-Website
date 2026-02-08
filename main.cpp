#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber = rand() % 100 + 1;  

    int guess;
    int attempts = 5;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;
    cout << "You have " << attempts << " attempts to guess it." << endl;

    for (int i = 1; i <= attempts; ++i) {
        cout << "\nAttempt " << i << ": Enter your guess: ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the number correctly!" << endl;
            return 0;
        } else if (guess < secretNumber) {
            cout << "Too low!";
        } else {
            cout << "Too high!";
        }

        if (i < attempts) {
            cout << " Try again.";
        }
    }

    cout << "\n\nSorry, you've used all your attempts." << endl;
    cout << "The number was: " << secretNumber << endl;

    return 0;
}
