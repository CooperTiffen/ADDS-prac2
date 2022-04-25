#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H
#include <iostream>
#include "ReduceGeneric.h"
#include <vector>

class ReduceMinimum: public ReduceGeneric{

private:
        virtual int binaryOperator(int, int);
        virtual int ExtraFunction(std::vector<int>);
};
#endif
