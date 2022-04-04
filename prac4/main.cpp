#include "Reverse.h"
#include "TruckLoads.h"
#include "EfficientTruckLoads.h"

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main(){

    //create an object of each part.
    Reverse a;
    Truckloads b;
    EfficientTruckloads c;

    //testing part a
    cout<<a.reverseString("Cooper")<<endl;
    cout<<a.reverseDigit(12345)<<endl;

    //testing part b
    cout<<c.numTrucks(14, 3)<<endl;

    //testing part c - using same inputs as part b to ensure same results.
    cout<<b.numTrucks(14,3)<<endl;

    return 0;
}