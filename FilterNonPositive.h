#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H
#include <iostream>
#include "FilterGeneric.h"

class FilterNonPositive: public FilterGeneric{

public:
        FilterNonPositive();

private:
        virtual bool g(int);
};
#endif
