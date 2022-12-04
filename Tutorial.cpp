#include <string>
#include <iostream>
#include <unistd.h>  
#include "Tutorial.h"

using namespace std;

// stuff to include: 
// .cpp and .h
// "include" at the top, inheritence 
// get input and output from user

void Tutorial::runTutorial() {

    keepGoing = true; 

    while (keepGoing == true) {

        partOne();

        getUserChoice();
        cout << "\033[2J\033[1;1H";

        partTwo();




       


        
        keepGoing = false;
    }
}

void Tutorial::partOne() {

    cout << "\033[2J\033[1;1H";
        
        cout << "This is an interactive C++ tutorial." << endl;
        cout << " " << endl;
        cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;
    

        getUserChoice();
        cout << "\033[2J\033[1;1H";

        cout << "Let's build a simple game where the user will guess a correct number between 1 and 10." << endl;
        cout << endl;
        cout << "The first step is to have the computer generate a random number." << endl;
        cout << endl;
        cout << "To do this, let's define a variable called \"randomNum\"." << endl;
        cout << endl;
        cout << "(Enter any key to continue.)" << endl;

        getUserChoice();
        cout << "\033[2J\033[1;1H";

        cout << "Let's build a simple game where the user will guess a correct number between 1 and 10." << endl;
        cout << endl;
        cout << "The first step is to have the computer generate a random number." << endl;
        cout << endl;
        cout << "To do this, let's define a variable called \"randomNum\"." << endl;
        cout << endl;
        cout << endl;
        cout << "Here is how to define randomNum:" << endl;
        cout << endl;
        cout << "int randomNum = rand() % 10;" << endl;
        cout << endl;
        cout << "(Enter any key to continue.)" << endl;

        getUserChoice();
        cout << "\033[2J\033[1;1H";

        cout << "Let's build a simple game where the user will guess a correct number between 1 and 10." << endl;
        cout << endl;
        cout << "The first step is to have the CPU generate a random number." << endl;
        cout << endl;
        cout << "To do this, let's define a variable called \"randomNum\"." << endl;
        cout << endl;
        cout << endl;
        cout << "Here is how to define randomNum:" << endl;
        cout << endl;
        cout << "int randomNum = rand() % 11;" << endl;
        cout << endl;
        cout << endl;
        cout << "Integer, or \"int\", is a PRIMITIVE variable type. This means that it is built in to C++ and can be used directly to declare variables." << endl;
        cout << endl;
        cout << "Character (char), Boolean (bool), Float, and Double are other commonly used primitive types." << endl;
        cout << endl;
        cout << "(Enter any key to continue.)" << endl;

        getUserChoice();
        cout << "\033[2J\033[1;1H";

        cout << "int randomNum = rand() % 11;" << endl;
        cout << endl;
        cout << "rand() % 11 is how the CPU chooses a random integer between 0 and 10." << endl;
        cout << endl;
        cout << "Because the index starts at 0, we must define a range of 10 + 1 in order to have numbers from 0 - 10." << endl;
        cout << endl;
        cout << "(Enter any key to continue.)" << endl;

}

void Tutorial::partTwo() {
    cout << "yassss" << endl;
}


void Tutorial::getUserChoice() {

    cin >> userChoice;

    if (userChoice == "quit") {
        keepGoing = false;
    }

    else {
        cout << " " << endl;
     }
}







