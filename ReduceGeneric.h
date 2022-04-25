#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <iostream>
#include <string>
#include <vector>

class ReduceGeneric{

public:
        ReduceGeneric();
//takes a vector as the input and returns the result of reduce.
        int reduce(std::vector<int>);

private:
//specifies the operator.
        virtual int binaryOperator(int,int)=0;
        virtual int ExtraFunction(std::vector<int>) = 0;
};
#endif