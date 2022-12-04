#include <string>
#include <iostream>
#include <unistd.h>  
#include "Tutorial.h"

using namespace std;

void Tutorial::runTutorial() {

    keepGoing = true; 

    while (keepGoing == true) {

        instructions();
 
        keepGoing = false;
    }
}

void Tutorial::instructions() {

    cout << "\033[2J\033[1;1H";

    
    //INTRO

    cout << "Welcome to this C++ tutorial." << endl;
    cout << " " << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;


    getUserChoice();
    cout << "\033[2J\033[1;1H";


    // PART 1

    cout << "Let's build a simple game where the user will guess a correct number between 1 and 10." << endl;
    cout << endl;
    cout << "The first step is to have the computer generate a random number." << endl;
    cout << endl;
    cout << "To do this, let's define a variable called \"randomNum\"." << endl;
    cout << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;

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
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;

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
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;

    getUserChoice();
    cout << "\033[2J\033[1;1H";

    cout << "int randomNum = rand() % 11;" << endl;
    cout << endl;
    cout << "rand() % 11 is how the CPU chooses a random integer between 0 and 10." << endl;
    cout << endl;
    cout << "Because the index starts at 0, we must define a range of 10 + 1 in order to have numbers from 0 - 10." << endl;
    cout << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;

    getUserChoice();
    cout << "\033[2J\033[1;1H";


    // PART 2

    cout << "Now that the CPU has chosen a number, it's time for the user to guess. To do this, we must get input from the user." << endl;
    cout << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;

    getUserChoice();
    cout << "\033[2J\033[1;1H";

    cout << "Now that the CPU has chosen a number, it's time for the user to guess. To do this, we must get input from the user." << endl;
    cout << endl;
    cout << "First, let's define usrInput:" << endl;
    cout << endl;
    cout << "int usrInput;" << endl;
    cout << endl;
    cout << "Then, use \"cin\" to obtain the integer. This is how C++ reads from the command line." << endl;
    cout << endl;
    cout << "cin >> usrInput;" << endl;
    cout << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;

    getUserChoice();
    cout << "\033[2J\033[1;1H";


    // PART 3

    cout << "We want the user to be able to keep guessing until they get the right number." << endl;
    cout << endl;
    cout << "To do this, let's implement a while loop." << endl;
    cout << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;

    getUserChoice();
    cout << "\033[2J\033[1;1H";

    cout << "In C++, a while loop follows this format:" << endl;
    cout << endl;
    cout << "while (boolean expression) {" << endl;
    cout << endl;
    cout << "   do actions until boolean expression is changed" << endl;
    cout << endl;
    cout << "}" << endl;
    cout << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;

    getUserChoice();
    cout << "\033[2J\033[1;1H";

    cout << "First, we will define a variable, isCorrectNum, for the boolean statement:" << endl;
    cout << endl;
    cout << "bool isCorrectNum = false;" << endl;
    cout << endl;
    cout << "It is set to false because we want the while loop to continue until the correct number is entered." << endl;
    cout << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;

    getUserChoice();
    cout << "\033[2J\033[1;1H";

    cout << "First, we will define a variable, isCorrectNum, for the boolean statement:" << endl;
    cout << endl;
    cout << "bool isCorrectNum = false;" << endl;
    cout << endl;
    cout << "It is set to false because we want the while loop to continue until the correct number is entered." << endl;
    cout << endl;
    cout << endl;
    cout << "Next, the while loop." << endl;
    cout << endl;
    cout << "while (isCorrectNum == false) {" << endl;
    cout << "   cout << \"Guess a number\" << endl;" << endl;
    cout << "   cin >> usrInput;" << endl;
    cout << endl;
    cout << "   if (usrInput == randomNum) {" << endl;
    cout << "       isCorrectNum = true;" << endl;
    cout << "       cout << \"That's correct!\" << endl;" << endl;
    cout << "   }" << endl;
    cout << "   else {" << endl;
    cout << "       cout << \"Try again.\" << endl;" << endl;
    cout << "       isCorrectNum = false;" << endl;
    cout << "    }" << endl;
    cout << "}" << endl;
    cout << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;

    getUserChoice();
    cout << "\033[2J\033[1;1H";

    cout << "bool isCorrectNum = false;" << endl;
    cout << endl;
    cout << "while (isCorrectNum == false) {" << endl;
    cout << "   cout << \"Guess a number\" << endl;" << endl;
    cout << "   cin >> usrInput;" << endl;
    cout << endl;
    cout << "   if (usrInput == randomNum) {" << endl;
    cout << "       isCorrectNum = true;" << endl;
    cout << "       cout << \"That's correct!\" << endl;" << endl;
    cout << "   }" << endl;
    cout << "   else {" << endl;
    cout << "       cout << \"Try again.\" << endl;" << endl;
    cout << "       isCorrectNum = false;" << endl;
    cout << "    }" << endl;
    cout << "}" << endl;
    cout << endl;
    cout << endl;
    cout << "Notice the use of \"cout\" to write a string out to the command line." << endl;
    cout << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;

    getUserChoice();
    cout << "\033[2J\033[1;1H";
    
    cout << "bool isCorrectNum = false;" << endl;
    cout << endl;
    cout << "while (isCorrectNum == false) {" << endl;
    cout << "   cout << \"Guess a number\" << endl;" << endl;
    cout << "   cin >> usrInput;" << endl;
    cout << endl;
    cout << "   if (usrInput == randomNum) {" << endl;
    cout << "       isCorrectNum = true;" << endl;
    cout << "       cout << \"That's correct!\" << endl;" << endl;
    cout << "   }" << endl;
    cout << "   else {" << endl;
    cout << "       cout << \"Try again.\" << endl;" << endl;
    cout << "       isCorrectNum = false;" << endl;
    cout << "    }" << endl;
    cout << "}" << endl;
    cout << endl;
    cout << endl;
    cout << "Notice the use of \"cout\" to write a string out to the command line." << endl;
    cout << endl;
    cout << endl;
    cout << "This while loop includes an if-else statement. This is to determine the value of the boolean expression as the game is played." << endl;
    cout << endl;
    cout << "The program will check if the user has inputted the correct number, and change the value of isCorrectNum accordingly." << endl;
    cout << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;
    
    getUserChoice();
    cout << "\033[2J\033[1;1H";

    // PART 4

    cout << "Now, let's go over some organization of a good C++ game program." << endl;
    cout << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;
    
    getUserChoice();
    cout << "\033[2J\033[1;1H";

    cout << "First, we will need a main function where the game will be executed from." << endl;
    cout << endl;
    cout << "A file called \"main.cpp\" will look like this: " << endl;
    cout << endl;
    cout << "// main.cpp" << endl;
    cout << endl;
    cout << "int main() {"  << endl;
    cout << endl;
    cout << "   (execution)" << endl;
    cout << endl;
    cout << "}" << endl;
    cout << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;
    
    getUserChoice();
    cout << "\033[2J\033[1;1H";

    cout << "In order to call our game in main.cpp, we need to group it together in a Function." << endl;
    cout << endl;
    cout << "We define a function called \"play()\" that will include the code from our game:" << endl;
    cout << endl;
    cout << endl;
    cout << "void play() {" << endl;
    cout << endl;
    cout << "   bool isCorrectNum = false;" << endl;
    cout << endl;
    cout << "   while (isCorrectNum == false) {" << endl;
    cout << "       cout << \"Guess a number\" << endl;" << endl;
    cout << "       cin >> usrInput;" << endl;
    cout << endl;
    cout << "       if (usrInput == randomNum) {" << endl;
    cout << "           isCorrectNum = true;" << endl;
    cout << "           cout << \"That's correct!\" << endl;" << endl;
    cout << "       }" << endl;
    cout << "       else {" << endl;
    cout << "           cout << \"Try again.\" << endl;" << endl;
    cout << "           isCorrectNum = false;" << endl;
    cout << "       }" << endl;
    cout << "   }" << endl;
    cout << endl;
    cout << "}" << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;
    
    getUserChoice();
    cout << "\033[2J\033[1;1H";

    cout << "void play() {" << endl;
    cout << endl;
    cout << "..." << endl;
    cout << endl;
    cout << "}" << endl;
    cout << endl;
    cout << "The function play() is a DERIVED variable type. This means that it is made from primitive data types." << endl;
    cout << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;
    
    getUserChoice();
    cout << "\033[2J\033[1;1H";

    cout << "void play() {" << endl;
    cout << endl;
    cout << "..." << endl;
    cout << endl;
    cout << "}" << endl;
    cout << endl;
    cout << "The function play() is a DERIVED variable type. This means that it is made from primitive data types." << endl;
    cout << endl;
    cout << endl;
    cout << "The word \"void\" in front means that this function will not produce any output. It will only execute what is inside." << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;
    
    getUserChoice();
    cout << "\033[2J\033[1;1H";


    // PART 5:

    cout << "Now, for further organization, let's make our game into it's own object, so that we can use it as a variable type whenever we want to call it elsewhere." << endl;
    cout << endl;
    cout << "To do this, we create a header file called \"Game.h\"." << endl;
    cout << "A header file outlines the components of a user-defined object." << endl;
    cout << endl;
    cout << "The header file for our Game follows the format: " << endl;
    cout << endl;
    cout << "// Game.h" << endl;
    cout << endl;
    cout << "class Game {" << endl;
    cout << endl;
    cout << "public:" << endl;
    cout << "   Game(){}" << endl;
    cout << "   ..." << endl;
    cout << endl;
    cout << "}" << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;
    
    getUserChoice();
    cout << "\033[2J\033[1;1H";

    cout << "// Game.h" << endl;
    cout << endl;
    cout << "class Game {" << endl;
    cout << endl;
    cout << "public:" << endl;
    cout << "   Game(){}" << endl;
    cout << "   ..." << endl;
    cout << endl;
    cout << "}" << endl;
    cout << endl;
    cout << "Let's define our game variables in this header file so that we can use them elsewhere without having to redefine them." << endl;
    cout << endl;
    cout << "// Game.h" << endl;
    cout << endl;
    cout << "class Game {" << endl;
    cout << endl;
    cout << "public:" << endl;
    cout << "   Game(){}" << endl;
    cout << endl;
    cout << "   int randomNum;" << endl;
    cout << "   int usrInput;" << endl;
    cout << "   void play();" << endl;
    cout << endl;
    cout << "}" << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;
    
    getUserChoice();
    cout << "\033[2J\033[1;1H";


    // PART 6

    cout << "Now that we have a Game object defined, it's time to call it from main.cpp" << endl;
    cout << endl;
    cout << "// main.cpp" << endl;
    cout << endl;
    cout << "int main() {"  << endl;
    cout << endl;
    cout << "   Game g" << endl;
    cout << endl;
    cout << "g.play()" << endl;
    cout << endl;
    cout << "}" << endl;
    cout << endl;
    cout << endl;
    cout << "Since we made our Game its own variable type, we can define the variable \"g\" just as we would an integer." << endl;
    cout << endl;
    cout << "The Game type is an ABSTRACT variable type, as it is defined by the user." << endl;
    cout << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;
    
    getUserChoice();
    cout << "\033[2J\033[1;1H";

    cout << "Now that we have a Game object defined, it's time to call it from main.cpp" << endl;
    cout << endl;
    cout << "// main.cpp" << endl;
    cout << endl;
    cout << "int main() {"  << endl;
    cout << endl;
    cout << "   Game g" << endl;
    cout << endl;
    cout << "   g.play()" << endl;
    cout << endl;
    cout << "}" << endl;
    cout << endl;
    cout << endl;
    cout << "Since we made our Game its own variable type, we can define the variable \"g\" to make a new Game, just as we would an integer." << endl;
    cout << endl;
    cout << "The Game type is an ABSTRACT variable type, as it is defined by the user." << endl;
    cout << endl;
    cout << "g.play() runs our play() function on the Game we created." << endl;
    cout << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;
    
    getUserChoice();
    cout << "\033[2J\033[1;1H";


    // PART 7
    cout << "We're almost finished with our game. The last step is to add some lines of code at the beginning of our files." << endl;
    cout << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;
    
    getUserChoice();
    cout << "\033[2J\033[1;1H";

    cout << "At the top of each file, we must write: " << endl;
    cout << endl;
    cout << "#include <string>" << endl;
    cout << "#include <iostream>" << endl;
    cout << "using namespace std" << endl;
    cout << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;
    
    getUserChoice();
    cout << "\033[2J\033[1;1H";

    cout << "At the top of each file, we must write: " << endl;
    cout << endl;
    cout << "#include <string>" << endl;
    cout << "#include <iostream>" << endl;
    cout << "using namespace std" << endl;
    cout << endl;
    cout << endl;
    cout << "The first line allows us to use \"string\" as a primitive variable type." << endl;
    cout << endl;
    cout << "The second line accesses a C++ library that allows us to have input and output capabilities." << endl;
    cout << endl;
    cout << "The third line allows us to use the standard C++ namespace library." << endl;
    cout << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;
    
    getUserChoice();
    cout << "\033[2J\033[1;1H";

    cout << "Additionally, we need to make sure that our Game.cpp file knows where its components are defined." << endl;
    cout << endl;
    cout << "At the top of Game.cpp, we write: #include Game.h" << endl;
    cout << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;
    
    getUserChoice();
    cout << "\033[2J\033[1;1H";

    cout << "Additionally, we need to make sure that our Game.cpp file knows where its components are defined." << endl;
    cout << endl;
    cout << "At the top of Game.cpp, we write: #include Game.h" << endl;
    cout << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;
    cout << endl;
    cout << "Similarly, because main.cpp uses a function that is defined in Game.h, we must write \"#include Game.h\" at the top of this file as well." << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;
    
    getUserChoice();
    cout << "\033[2J\033[1;1H";


    // PART 8

    cout << "To review, here is what each file should look like: " << endl;
    cout << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;
    
    getUserChoice();
    cout << "\033[2J\033[1;1H";

    cout << "Game.h" << endl;
    cout << endl;
    cout << endl;
    cout << "#include <string>" << endl;
    cout << "#include <iostream>" << endl;
    cout << "using namespace std" << endl;
    cout << endl;
    cout << "class Game {" << endl;
    cout << endl;
    cout << "public:" << endl;
    cout << "   Game(){}" << endl;
    cout << endl;
    cout << "   int randomNum;" << endl;
    cout << "   int usrInput;" << endl;
    cout << "   void play();" << endl;
    cout << endl;
    cout << "}" << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;
    
    getUserChoice();
    cout << "\033[2J\033[1;1H";

    cout << "Game.cpp" << endl;
    cout << endl;
    cout << endl;
    cout << "#include <string>" << endl;
    cout << "#include <iostream>" << endl;
    cout << "#include \"Game.h\"" << endl;
    cout << "using namespace std" << endl;
    cout << endl;
    cout << "void::Game play() {" << endl;
    cout << endl;
    cout << "   int randomNum = rand() % 11;" << endl;
    cout << "   bool isCorrectNum = false;" << endl;
    cout << endl;
    cout << "   while (isCorrectNum == false) {" << endl;
    cout << "       cout << \"Guess a number\" << endl;" << endl;
    cout << "       cin >> usrInput;" << endl;
    cout << endl;
    cout << "       if (usrInput == randomNum) {" << endl;
    cout << "           isCorrectNum = true;" << endl;
    cout << "           cout << \"That's correct!\" << endl;" << endl;
    cout << "       }" << endl;
    cout << "       else {" << endl;
    cout << "       cout << \"Try again.\" << endl;" << endl;
    cout << "           isCorrectNum = false;" << endl;
    cout << "       }" << endl;
    cout << "   }" << endl;
    cout << "}" << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;
    
    getUserChoice();
    cout << "\033[2J\033[1;1H";

    cout << "main.cpp" << endl;
    cout << endl;
    cout << endl;
    cout << "#include <string>" << endl;
    cout << "#include <iostream>" << endl;
    cout << "#include \"Game.h\"" << endl;
    cout << "using namespace std" << endl;
    cout << "int main() {"  << endl;
    cout << endl;
    cout << "   Game g" << endl;
    cout << endl;
    cout << "g.play()" << endl;
    cout << endl;
    cout << "}" << endl;
    cout << "(Enter any key to continue, or type \"quit\" to quit.)" << endl;
    
    getUserChoice();
    cout << "\033[2J\033[1;1H";


    // PART 9
    cout << "Now it's time to play our game!" << endl;
    cout << "(Enter any key to PLAY, or type \"quit\" to quit.)" << endl;
    
    getUserChoice();
    cout << "\033[2J\033[1;1H";
    
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







