#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"


int main(){

    std::vector<int> list;
    std::string line;
    std::getline(std::cin, line);
    std::istringstream os(line);

    int i;
    while(os >> i)
        list.push_back(i);

    QuickSort QS;
    std::vector<int> result = QS.sort(list);

    RecursiveBinarySearch RBS;
    bool output = RBS.search(result, 1);

    if(output){
        std::cout<<"true"<<" ";
    }
    else{
        std::cout<<"false"<<" ";
    }

    for(int i = 0;i<int(list.size());i++){
        std::cout<<result[i]<<" ";
    }


    return 0;
}