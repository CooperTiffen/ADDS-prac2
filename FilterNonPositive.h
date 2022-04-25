#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H
#include <iostream>
#include "FilterGeneric.h"

class FilterNonPositive: public FilterGeneric{

public:
        FilterNonPositive();

private:
//takes and changes inherited function and  returns true if and only if x is non-positive.
        virtual bool g(int);
};
#endif
