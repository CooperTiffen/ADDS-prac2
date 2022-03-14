#include "Referee.h"

Referee::Referee(){
}

char Referee::refGame(Human player1, Computer player2){

//Each player makes a move.
    char p1val = player1.makeMove();
    char c1val = player2.makeMove();

//Each case is prepared and compared with each player choice and the appropriate response is returned.
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
//An else is included to ensure the code does not crash in the event of un-tested inputs.
    else{
        return 'L';
    }
};