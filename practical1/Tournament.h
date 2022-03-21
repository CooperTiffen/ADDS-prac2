#ifndef TOURNAMENT_H
#define TOURNAMENT_H

#include "Player.h"
#include "Referee.h"
#include <array>

class Tournament{
    public:
        Tournament();
        Player * run(std::array<Player*, 8> competitors); 
        Player * rounds(Player * p1, Player * p2);
    
    private:
        Referee * ref;

};

#endif