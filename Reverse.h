#ifndef REVERSE_H
#define REVERSE_H

#include <iostream>
#include <string>


class Reverse{

public:
        Reverse ();
        //takes non negative int value and uses recursion to reverse it.
        int reverseDigit(int);
        //identical to reverseDigit, but reverses strings.
        std::string reverseString(std::string);

protected:
        int digit;
        std::string rev = "";
        int revNo = 0;
};

#endif