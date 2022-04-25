#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <iostream>
#include <string>
#include <vector>

class FilterGeneric{

public:

        FilterGeneric();
        std::vector<int>filter(std::vector<int>);

        private:

        virtual bool g(int)=0;
        std::vector<int> victorLastName;
};
#endif

