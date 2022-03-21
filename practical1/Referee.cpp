#include "Referee.h"


Referee::Referee(){


}

char Referee::refGame(Player *  player1, Player * player2){

    char p1val = player1->makeMove();
    char c1val = player2->makeMove();

    if(p1val == c1val){
        return 'T';
    }
    else if(p1val == 'R' and c1val == 'S'){
        return 'W';
    }

    else if(p1val == 'P' and c1val == 'R'){
        return 'W';
    }

    else if(p1val == 'S' and c1val == 'P'){
        return 'W';
    }

    else{
        return 'L';
    }

}

