#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
class Player{
    public:
        Player();
        virtual char makeMove() = 0;

    protected:
        std::string name;


};

#endif