#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include <iostream>
#include <string>


class Individual{

    public:
        Individual(int k);
        Individual(std::string DNA);
        std::string getString();
        int getBit(int pos);
        void flipBit(int pos);
        int getMaxOnes();
        int getLength();

    private:
        std::string binaryString;
};

#endif