#include <string>
#include <iostream>
#include "Tutorial.h"
#include "Game.h"

using namespace std;

int main()
{

    Tutorial t;
    Game g;

    t.runTutorial();

    g.play();
    
    t.endingStatement();

}