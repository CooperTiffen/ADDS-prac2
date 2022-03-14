#ifndef REFEREE_H
#define REFEREE_H
#include <string>
#include <iostream>
#include "Computer.h"
#include "Human.h"

class Referee{

public:
    Referee();
    //This function is used to compare the 2 choices and return the result for the user.
    char refGame(Human player1, Computer player2);

private:

};

#endif