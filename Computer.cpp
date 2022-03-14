#include "Computer.h"

Computer::Computer(){
};

//For this practical, the ai only chooses rock, later practicals will include a choice.
char Computer::makeMove(){
    choice = 'R';
//This choice is then returned for use in comparison.
    return choice;
};