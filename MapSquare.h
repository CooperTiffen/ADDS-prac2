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
        virtual int f(int);
};
#endif