#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <iostream>
#include <string>
#include <vector>

class FilterGeneric{

public:

        FilterGeneric();
//takes a vector as the input and returns the resulting vector after filtering.
        std::vector<int>filter(std::vector<int>);

private:
//specifies the operation we want to map onto a list.
        virtual bool g(int)=0;
        std::vector<int> victorLastName;
};
#endif

