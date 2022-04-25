#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <iostream>
#include <vector>
#include <map>

class MapGeneric{

public:
        MapGeneric();
        std::vector<int> map(std::vector<int>);

private:
        virtual int f(int)=0;
};
#endif

