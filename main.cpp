#include <iostream>
#include <array>
#include "Computer.h"
#include "Human.h"
#include "RandomComputer.h"
#include "Avalanche.h"
#include "Toolbox.h"
#include "Bureaucrat.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include "Player.h"
#include "Tournament.h"

#include "Referee.h"

int main(){

    // Human * p1 = new Human();
    // Crescendo * c1 = new Crescendo();
    // Referee ref;
    Tournament WorldCup;
    std::array<Player*,8>players = {new Avalanche(), new Bureaucrat(), new Bureaucrat(), new Toolbox(), new Toolbox(), new Crescendo(), new Crescendo(), new FistfullODollars()};
    //while(true){

        //std::cout<<ref.refGame(p1, c1)<<std::endl;

        Player * winner = WorldCup.run(players);

        std::cout<<winner->revealName()<<std::endl;


    //}


    return 0;

}