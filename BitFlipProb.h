#ifndef BITFLOPPROB_H
#define BITFLOPPROB_H
#include "Mutator.h"

class BitFlipProb: public Mutator{
    
    public:
        BitFlipProb(double prob);
        Individual * mutate(Individual * indPtr, int k);

    private:
        double p;

};

#endif