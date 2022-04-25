#ifndef REDUCEGCD_H
#define REDUCEGCD_H
#include <iostream>
#include "ReduceGeneric.h"

class ReduceGCD: public ReduceGeneric{

public:
        ReduceGCD();

private:
//takes and changes inherited function and  returns the greatest common denominator of the two inputs.
        virtual int binaryOperator(int, int);
        virtual int ExtraFunction(std::vector<int> vect);
};
#endif
