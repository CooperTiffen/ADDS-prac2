#include "FilterForTwoDigitPositive.h"
#include "FilterGeneric.h"
#include "FilterNonPositive.h"
#include "FilterOdd.h"
#include "MapAbsoluteValue.h"
#include "MapGeneric.h"
#include "MapSquare.h"
#include "MapTriple.h"
#include "ReduceGCD.h"
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include <vector>
#include <iostream>

int main(){

    std::vector<int> values;
    MapTriple mt;
    MapSquare ms;
    MapAbsoluteValue mav;
    FilterOdd fo;
    FilterNonPositive fnp;
    FilterForTwoDigitPositive fftdp;
    ReduceMinimum rm;
    ReduceGCD rdgcd;

    int number;
    char c;

    do {
        std::cin>>number;
        values.push_back(number);
        c= fgetc(stdin);

    }while(c ==',');

    values = mav.map(values);

    values = mt.map(values);

    values = fo.filter(values);
    values = fftdp.filter(values);

   std::cout<<rm.reduce(values)<< " " << rdgcd.reduce(values)<<std::endl;

    return 0;
}