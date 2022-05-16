#include "BubbleSort.h"
#include <vector>

std::vector<int> BubbleSort::sort(std::vector<int> list){

    int length = list.size();

    for(int i=0; i<length; i++){

        for(int k=0; k<length-i-1; k++){

            if(list.at(k)>list.at(k+1)){

                std::swap(list[k], list[k+1]);
            }
        }
        }
        return list;
}