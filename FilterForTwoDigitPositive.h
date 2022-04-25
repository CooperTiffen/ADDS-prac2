#ifndef FILTERFORTWODIGITPOSITIVE_H
#define FILTERFORTWODIGITPOSITIVE_H
#include <iostream>
#include "FilterGeneric.h"

class FilterForTwoDigitPositive: public FilterGeneric{

public:

private:
//takes and changes inherited function and  returns true if and only if x has 2 digits and is positive.
        virtual bool g(int);
};
#endif
