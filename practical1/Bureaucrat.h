#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include "Computer.h"

class Bureaucrat : public Computer {

    public:
        Bureaucrat();
        virtual char makeMove();
    private:
        char choice;

};

#endif
