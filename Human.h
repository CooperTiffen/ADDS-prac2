#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>

class Human{

//Similar to the computer player, the makeMove function is utilised to allow the user to interact with the game.
public:
    Human();
    char makeMove();

private:
    char choice;
};

#endif