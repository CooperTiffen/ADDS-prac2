#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include "Computer.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class RandomComputer : public Computer {
    public:
        RandomComputer();
        virtual char makeMove();
    private:
        char choice;
};



#endif
