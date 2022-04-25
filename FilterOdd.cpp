#include "FilterOdd.h"
#include "FilterGeneric.h"

FilterOdd::FilterOdd(){
}

bool FilterOdd::g(int n){

    if(n % 2 !=0){

        return true;
    }else{

    return false;
    }
}
