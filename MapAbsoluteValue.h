#ifndef MAPABSOLUTEVALUE_H
#define MAPABSOLUTEVALUE_H
#include <iostream>
#include <vector>
#include <map>
#include "MapGeneric.h"

class MapAbsoluteValue: public MapGeneric{

public:
        MapAbsoluteValue();

private:
//takes and changes inherited function to return absolute value of input vector.
        virtual int f(int);
};
#endif