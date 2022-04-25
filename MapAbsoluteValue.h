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
        virtual int f(int);
};
#endif