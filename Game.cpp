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
            isCorrectNum = false;
        }
    }

}



// part 1: get random num
// part 2: get user input
// part 3: the while loop
// part 4: putting this in a function
// part 5: defining this function in a header file and fixing format
// part 6: 

// need to mention derived (function) and abstract (Game) variable types



