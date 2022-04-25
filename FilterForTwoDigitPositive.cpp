#include "FilterForTwoDigitPositive.h"
#include "FilterGeneric.h"


bool FilterForTwoDigitPositive::g(int n){

    if(n>=10 && n<100){

        return true;
    }else {
        return false;
    }
}
