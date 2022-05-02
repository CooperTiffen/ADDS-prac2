#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "Rearrange.h"
#include "BitFlipProb.h"
#include <iostream>

Individual * execute(Individual * indPtr, Mutator * mPtr, int k){

    return mPtr->mutate(indPtr, k);
}

int main(){

    BitFlip bf;
    Rearrange r;

    std::string binarystr1;
    std::string binarystr2;
    int k1;
    int k2;

    std::cin>>binarystr1>>k1>>binarystr2>>k2;

    Individual first(binarystr1);
    Individual second(binarystr2);

    Individual * offspring = execute(&first, &bf, k1);
    Individual * offspring2 = execute(&second, &r, k2);

    std::cout<<offspring->getString()<<" "<<offspring2->getString()<<" "<<offspring2->getMaxOnes()<<std::endl;
}

