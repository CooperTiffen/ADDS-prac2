#ifndef PAPERDOLL_H
#define PAPERDOLL_H
#include "Computer.h"

class PaperDoll : public Computer{

    public:
        virtual char makeMove();
        PaperDoll();


    private:
        char choice;
        char order[3] = {'P', 'S', 'S'};
        int counter = 0;

};

#endif