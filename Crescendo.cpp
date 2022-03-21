#include "Crescendo.h"

Crescendo::Crescendo(){
}

char Crescendo::makeMove(){

    choice = order[counter];
    counter++;

    if(counter >= 3){
        resetCounter();
    }

    return choice;

}
