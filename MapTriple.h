#ifndef MAPTRIPLE_H
#define MAPTRIPLEE_H
#include <iostream>
#include "MapGeneric.h"
#include <vector>

class MapTriple: public MapGeneric{

public:
        MapTriple();

private:
        virtual int f(int);
};
#endif