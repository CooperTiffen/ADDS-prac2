#ifndef TOOLBOX_H
#define TOOLBOX_H
#include "Computer.h"

class Toolbox : public Computer {

    public:
        Toolbox();
        virtual char makeMove();

    private:
        char choice;

};

#endif
