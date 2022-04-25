#ifndef MAPTRIPLE_H
#define MAPTRIPLEE_H
#include <iostream>
#include "MapGeneric.h"
#include <vector>

class MapTriple: public MapGeneric{

public:
        MapTriple();

private:
//takes and changes inherited function and triples input vector.
        virtual int f(int);
};
#endif