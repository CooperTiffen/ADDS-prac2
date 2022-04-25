#ifndef FILTERODD_H
#define FILTERODD_H
#include <iostream>
#include "FilterGeneric.h"

class FilterOdd: public FilterGeneric{

public:
        FilterOdd();

private:
        virtual bool g(int);
};
#endif
