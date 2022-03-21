#include "PaperDoll.h"

PaperDoll::PaperDoll(){
}

char PaperDoll::makeMove(){

    choice = order[counter];
    counter++;

    if(counter >= 3){
        counter = 0;
    }

    return choice;

}
