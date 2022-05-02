#ifndef MUTATOR_H
#define MUTATOR_H

#include "Individual.h"

class Mutator{

    public:
        virtual Individual * mutate(Individual * indPtr, int k) = 0;

    private:
};

#endif