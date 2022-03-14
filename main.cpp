#include <iostream>
#include "Computer.h"
#include "Human.h"
#include "Referee.h"

int main(){
//An instance of each class is formed.
Human p1;
Computer c1;
Referee ref;

//Both players make their choice. These choices are then compared and the result, in terms of the user, is printed.
std::cout<<ref.refGame(p1, c1)<<std::endl;

return 0;

}