#ifndef FISTFULLODOLLARS_H
#define FISTFULLODOLLARS_H
#include "Computer.h"

class FistfullODollars : public Computer{

    public:
        virtual char makeMove();
        FistfullODollars();

    private:
        char choice;
        char order[3] = {'R', 'P', 'P'};
        int counter = 0;

};

#endif