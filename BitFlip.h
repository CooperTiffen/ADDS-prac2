#ifndef BITFLIP_H
#define BITFLIP_H
#include "Mutator.h"

class BitFlip: public Mutator{
    
    public:
        BitFlip();
        Individual * mutate(Individual * indPtr, int k);
};

#endif