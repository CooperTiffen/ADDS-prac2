#include "EfficientTruckLoads.h"
#include <iostream>


EfficientTruckloads::EfficientTruckloads(){
}

int EfficientTruckloads::numTrucks(int numCrates, int loadSize){

    TruckValues.insert (std::pair<int,int>(numCrates,-1));

    if(TruckValues.at(numCrates) != -1){
        return TruckValues.at(numCrates);

    }else{
      if (numCrates ==0){
        return 0;
    }

    if (numCrates <= loadSize)
        return 1;

    if(numCrates %2 != 0){
       TruckValues.at(numCrates) = numTrucks(numCrates/2, loadSize) + numTrucks(numCrates/2 + 1, loadSize);

    }
    else {
    TruckValues.at(numCrates)= numTrucks(numCrates/2, loadSize)+ numTrucks(numCrates/2, loadSize);

        }
       return TruckValues.at(numCrates);
    }
}