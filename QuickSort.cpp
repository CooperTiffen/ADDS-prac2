#include "QuickSort.h"
#include <vector>
#include <iostream>

std::vector<int> QuickSort::sort(std::vector<int> list){
    int length = list.size();

    if(length <=1)
        return list;

    std::vector<int> smaller;
    std::vector<int> bigger;

    int pivot = list[0];

    list.erase(list.begin()+0);

    int length2 = list.size();

    for(int i=0; i<length2; i++){
        if(list.at(i)<= pivot)
        smaller.push_back(list.at(i));

        if(list.at(i)> pivot)
        bigger.push_back(list.at(i));
    }

    
    smaller = sort(smaller);
    bigger = sort(bigger);


    smaller.push_back(pivot);
    smaller.insert(smaller.end(), bigger.begin(), bigger.end());

    return smaller;
}