#include "Human.h"

Human::Human(){
};

char Human::makeMove(){
//A while loop is used to allow the user to choose 1 of the 3 options.
while(true){
    std::cout<<"Enter move: ";
    std::cin>>choice;
//The options are then checked and returned for comparison.
    if(choice == 'R' or choice == 'S' or choice == 'P'){
        break;
    }
}

return choice;

};