#include "BitFlip.h"
#include "Individual.h"

BitFlip::BitFlip(){
}

//The mutate function in this class “flips” the kth binary digit.
Individual * BitFlip::mutate(Individual * indPtr, int k){

    k = k-1;

    if(k>=indPtr->getLength()){

        while(k>=indPtr->getLength()){

            k = k%indPtr->getLength();
        }
        indPtr->flipBit(k);
    }

    else{

        indPtr->flipBit(k);
    }
    return indPtr;
}