#include "FistfullODollars.h"

FistfullODollars::FistfullODollars(){
}

char FistfullODollars::makeMove(){

    choice = order[counter];
    counter++;

    if(counter >= 3){
        counter = 0;
    }

    return choice;

}
