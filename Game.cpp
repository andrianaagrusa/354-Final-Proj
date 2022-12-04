#include <string>
#include <iostream>
#include "Game.h"

using namespace std;

void Game::play() {

    randomNum = rand() % 11;

    bool isCorrectNum = false;

    while (isCorrectNum == false) {
        cout << "Guess a number" << endl;
        cin >> usrInput;

        if (usrInput == randomNum) {
            isCorrectNum = true;
            cout << "That's correct!" << endl;
        }
        else {
            cout << "Try again." << endl;
            isCorrectNum = false;
        }
    }

}



// part 1: get random num
// part 2: get user input
// part 3: the while loop
// part 4: putting this in a function
// part 5: defining this function in a header file and fixing format
// part 6: calling in main
// part 7: final steps - #include stuff
// part 8: final code
// part 9: running the game





