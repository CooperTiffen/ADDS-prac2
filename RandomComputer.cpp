#include "RandomComputer.h"


RandomComputer::RandomComputer(){

}

char RandomComputer::makeMove(){
    srand(time(0));

    int randomNum = rand() % 3;

    char values[3] = {'R', 'S', 'P'};

    choice = values[randomNum];
    //std::cout<<choice<<std::endl;


    return choice;

}
