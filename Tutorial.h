#include <string>
#include <iostream>

using namespace std;

class Tutorial {
    
public:
    Tutorial(){}
    ~Tutorial(){}

    string userChoice;
    bool keepGoing;

    void partOne();
    void partTwo();

    void runTutorial();
    
    void getUserChoice();
};