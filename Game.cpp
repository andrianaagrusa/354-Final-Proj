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




// part 2: get user input



