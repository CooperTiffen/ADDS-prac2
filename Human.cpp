#include "Human.h"

Human::Human(){

}

char Human::makeMove(){

    while(true){
        std::cout<<"Enter move: ";
        std::cin>>choice;

        if(choice == 'R' or choice == 'S' or choice == 'P'){
            break;
        }
    }
    //std::cout<<choice<<std::endl;

    return choice;

}


