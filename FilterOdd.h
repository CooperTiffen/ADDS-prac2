#ifndef FILTERODD_H
#define FILTERODD_H
#include <iostream>
#include "FilterGeneric.h"

class FilterOdd: public FilterGeneric{

public:
        FilterOdd();

private:
//takes and changes inherited function and  returns true if and only if x is odd.
        virtual bool g(int);
};
#endif
