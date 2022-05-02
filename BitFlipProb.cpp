#include "BitFlipProb.h"
#include <ctime>

BitFlipProb::BitFlipProb(double prob){

    p = prob;
}

//The mutate function in this class goes through every digit in the binary string and “flips” each of the binary digit with probability p.
Individual * BitFlipProb::mutate(Individual * indPtr, int k){

    srand(time(0));
    rand();
    for(int i = 0; i<indPtr->getLength();i++){

        double randDbl = (double) rand()/ RAND_MAX;
        if(randDbl<=this->p){

            indPtr->flipBit(i);
        }
    }


    return indPtr;
}