#ifndef AVALANCHE_H
#define AVALANCHE_H
#include "Computer.h"

class Avalanche : public Computer {

    public:
        Avalanche();
        virtual char makeMove();
    private:
        char choice;

};

#endif
