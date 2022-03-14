#ifndef COMPUTER_H
#define COMPUTER_H
#include <iostream>

class Computer{

//the makeMove function allows the computer player to choose their option for comparison.
public:
    Computer();
    char makeMove();
private:
    char choice;
};

#endif