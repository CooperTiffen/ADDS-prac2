#include "Node.h"
#include <string>
#include "LinkedList.h"


int main(){

    std::string input;
    int list[100];
    std::string FUNCTION_CODE;
    int param1, param2;

    int size = 0;

    while(std::cin.peek() >= '0' && std::cin.peek() <= '9'){

		std::cin >> list[size++];
		std::cin >> std::ws;
	}

    	std::cin >> FUNCTION_CODE;
    	std::cin >> param1 >> param2;


    LinkedList llist(list, size);


    if(FUNCTION_CODE[0] == 'A'){
        if(FUNCTION_CODE[1] == 'F'){
            llist.addFront(param1);
        }

        else if(FUNCTION_CODE[1] == 'E'){
            llist.addEnd(param1);
        }

        else if(FUNCTION_CODE[1] == 'P'){
            llist.addAtPosition(param1, param2);
        }

    }

    else if(FUNCTION_CODE[0] == 'S'){
        llist.search(param1);
    }

    else if(FUNCTION_CODE[0] == 'D'){
        if(FUNCTION_CODE[1] == 'F'){
            llist.deleteFront();
        }

        else if(FUNCTION_CODE[1] == 'E'){
            llist.deleteEnd();
        }

        else if(FUNCTION_CODE[1] == 'P'){
            llist.deletePosition(param1);
        }
    }

    else if(FUNCTION_CODE[0] == 'G' and FUNCTION_CODE[1] == 'I'){
        llist.getItem(param1);
    }

    llist.printItems();

    return 0;
}