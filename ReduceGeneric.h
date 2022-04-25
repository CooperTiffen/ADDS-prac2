#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <iostream>
#include <string>
#include <vector>

class ReduceGeneric{

public:
        ReduceGeneric();
        int reduce(std::vector<int>);

private:
        virtual int binaryOperator(int,int)=0;
        virtual int ExtraFunction(std::vector<int>) = 0;
};
#endif