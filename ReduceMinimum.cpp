#include "ReduceGeneric.h"
#include "ReduceMinimum.h"

int ReduceMinimum::binaryOperator(int n1, int n2){

    if(n2<n1){
        return n2;
    }else{
        return n1;
    }
}

int ReduceMinimum::ExtraFunction(std::vector<int> vect){

    int minValue = vect[0];
    for(int i=0; i< (int)vect.size();i++){
         minValue= binaryOperator(vect[i], minValue);
    }
    return minValue;
}