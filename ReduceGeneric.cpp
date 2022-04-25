#include "ReduceGeneric.h"
#include <vector>

ReduceGeneric::ReduceGeneric(){
}

int ReduceGeneric::reduce(std::vector<int> vect){
   return ExtraFunction(vect);
}



