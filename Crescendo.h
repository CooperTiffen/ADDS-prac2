#ifndef CRESCENDO_H
#define CRESCENDO_H
#include "Computer.h"

class Crescendo : public Computer{

    public:
        virtual char makeMove();
        Crescendo();

    private:
        char choice;
        char order[3] = {'P', 'S', 'R'};
        int counter = 0;

};

#endif