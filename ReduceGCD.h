#ifndef REDUCEGCD_H
#define REDUCEGCD_H
#include <iostream>
#include "ReduceGeneric.h"

class ReduceGCD: public ReduceGeneric{

public:
        ReduceGCD();

private:
        virtual int binaryOperator(int, int);
        virtual int ExtraFunction(std::vector<int> vect);
};
#endif
