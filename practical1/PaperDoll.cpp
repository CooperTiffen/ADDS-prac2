#include "PaperDoll.h"

PaperDoll::PaperDoll(){
}

char PaperDoll::makeMove(){

    choice = order[counter];
    counter++;

    if(counter >= 3){
        resetCounter();
    }

    return choice;

}
