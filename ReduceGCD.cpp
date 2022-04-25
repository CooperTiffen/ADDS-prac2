#include "ReduceGeneric.h"
#include "ReduceGCD.h"
#include <vector>
#include <iostream>

ReduceGCD::ReduceGCD(){
}

int ReduceGCD::binaryOperator(int n1, int n2){

  if(n1 % n2 == 0){
      return n2;
  }else {
      return binaryOperator(n2, n1 % n2);
  }
}

int ReduceGCD::ExtraFunction(std::vector<int> vect){

    int GCDResult =binaryOperator(vect.at(0), vect.at(1));
    for(int i=1;i< int(vect.size());i++){
            if((binaryOperator(GCDResult, vect.at(i))) < GCDResult){
                GCDResult = (binaryOperator(GCDResult, vect.at(i)));
            }
    }
    return GCDResult;
}