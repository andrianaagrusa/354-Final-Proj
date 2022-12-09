#include <string>
#include <iostream>

using namespace std;

class Tutorial {
    
public:
    Tutorial(){}

    string userChoice;
    bool keepGoing;

    void instructions();
    void runTutorial();
    void getUserChoice();
    void endingStatement();
};