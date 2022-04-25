#include "MapAbsoluteValue.h"
#include "MapGeneric.h"
#include <iostream>
#include <vector>
#include <map>
#include <cstdlib>
using namespace std;

MapAbsoluteValue::MapAbsoluteValue(){
}

int MapAbsoluteValue::f(int n){

    int absolute = abs(n);
    return absolute;
}