#include "MapGeneric.h"
#include <iostream>
#include <vector>
#include <map>

MapGeneric::MapGeneric(){
}

std::vector<int> MapGeneric::map(std::vector<int> vect){

    for(int i=0; i< int(vect.size()); i++){
         vect[i] = f(vect[i]);
    }

    return vect;
}