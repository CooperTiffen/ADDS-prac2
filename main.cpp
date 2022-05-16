#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <vector>
#include <iostream>

int main(){

    std::vector<int> vect{-5, -8, -4, -2, -1};
      int length = vect.size();

      BubbleSort Bub;
        std::vector<int> BubVect = Bub.sort(vect);

       for(int i=0; i< length; i++){
           std::cout<<BubVect.at(i)<<" ";
       }

    RecursiveBinarySearch RBS;
    std::cout<<"Quicksort"<<std::endl;

       QuickSort QS;
      std::vector<int> Quick = QS.sort(vect);
       std::cout<<"output1"<<std::endl;
        for(int i=0; i< length; i++){
           std::cout<<Quick.at(i)<<" ";

       }
        std::cout<<"output2"<<std::endl;

        std::cout<<RBS.search(vect, 8);
    return 0;
}