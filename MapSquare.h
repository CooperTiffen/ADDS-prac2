#ifndef MAPSQUARE_H
#define MAPSQUARE_H
#include <iostream>
#include <vector>
#include <map>
#include "MapGeneric.h"

class MapSquare: public MapGeneric{

public:
        MapSquare();

private:
//takes and changes inherited function and squares input vector.
        virtual int f(int);
};
#endif