#ifndef EFFICIENTTRUCKLOADS_H
#define EFFICIENTTRUCKLOADS_H

#include <iostream>
#include <string>
#include <map>


class EfficientTruckloads{

public:
      EfficientTruckloads();
      //using a similar method to TruckLoads but with Memoisation.
      int numTrucks(int numCrates, int loadSize);

private:
      std::map <int,int> TruckValues;
};

#endif
