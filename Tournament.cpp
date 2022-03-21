#include "Tournament.h"

Tournament::Tournament(){
    ref = new Referee();
}

Player* Tournament::run(std::array<Player*, 8> competitors){

    std::array<Player*, 4> stageTwo;
    std::array<Player*, 2> stageThree;

    stageTwo[0] = rounds(competitors[0], competitors[1]);
	stageTwo[1] = rounds(competitors[2], competitors[3]);
	stageTwo[2] = rounds(competitors[4], competitors[5]);
	stageTwo[3] = rounds(competitors[6], competitors[7]);


	stageThree[0] = rounds(stageTwo[0], stageTwo[1]);
	stageThree[1] = rounds(stageTwo[2], stageTwo[3]);

	Player * result = rounds(stageThree[0], stageThree[1]);

	return result;

}

Player * Tournament::rounds(Player* p1, Player* p2){

    int p1_ctr = 0;
    int p2_ctr = 0;
    char winner;

    for(int j = 0; j<5;j++){
        winner = ref->refGame(p1, p2);
        if(winner == 'W'){
            p1_ctr++;
        }
        else if(winner == 'L'){
            p2_ctr++;
        }
    }

    if(p1_ctr>p2_ctr){
        return p1;
    }
    else if(p1_ctr<p2_ctr){
        return p2;
    }
    else{
        return p1;
    }

}