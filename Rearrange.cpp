#include "Rearrange.h"

Rearrange::Rearrange(){
}

//In this class, the mutate function rearranges the list.
Individual * Rearrange::mutate(Individual * indPtr, int k){

    k = k-1;
    while(k>=indPtr->getLength()){
        k = k%indPtr->getLength();
    }

    std::string newString;
    int q = k;
    for(int i = 0;i<indPtr->getLength();i++){

        char newVal = (char)indPtr->getBit(q)+48;
        newString.push_back(newVal);
        q++;

        if(q == indPtr->getLength()){
            q = 0;
        }

    }
    Individual * offspring = new Individual(newString);
    return offspring;
}