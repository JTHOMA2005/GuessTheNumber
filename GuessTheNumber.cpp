/*
    Name: Joey Thoma
    Date: 09/26/2024
    File: GuessTheNumber.cpp
 Summary: A little game where the computer will generate a number between 1-50.
                the user will guess, and it will return if the number was higher
                or lower than the generated one.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    srand(time(0)); // seeding the random with a changing seed

    int generatedNumber = rand() % 50; // generating a random number 1-50
    int guess;
    int guessAttempt = 1;

    cout << "FOR DEV: THE NUMBER IS " << generatedNumber << endl;
    cout << "The number has been decided!" << endl << "What is your guess? (1-50): ";
    cin >> guess;

    while (guess != generatedNumber) {
        
        if (guess <= 0 || guess >= 51) {

            cout << "\nYou entered and invalid guess." << endl;
            cout << "Remember it's 1-50!" << endl;
            cout << "Try again: ";
        }

        if (guess > generatedNumber && guess < 51) {

            cout << "\nNope! The number is smaller than that!" << endl;
            cout << "Try again: ";
        }

        if (guess < generatedNumber && guess > 0) {

            cout << "\nNope! The number is bigger than that!" << endl;
            cout << "Try again: ";
        }

        cin >> guess;
        guessAttempt++;

    }

    if (guessAttempt == 1){

        cout << "Woah! You got it first try! It was " << generatedNumber << endl;
        return(0);
    }

    else {

    cout << "\nYou got it! The number was " << generatedNumber << "!" << endl;
    cout << "You took " << guessAttempt << " guesses to get it right :3" << endl;
    return(0);
    }
}