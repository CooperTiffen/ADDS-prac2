#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <iostream>
#include <vector>
#include <map>

class MapGeneric{

public:
        MapGeneric();
// takes a vector and uses recursion to return  the resulting vector after mapping
        std::vector<int> map(std::vector<int>);

private:
// used to specify the operation to map onto a list.
        virtual int f(int)=0;
};
#endif

