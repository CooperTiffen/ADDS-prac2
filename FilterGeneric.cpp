#include "FilterGeneric.h"
#include <vector>
#include <iostream>


FilterGeneric::FilterGeneric(){
}

std::vector<int> FilterGeneric::filter(std::vector<int> vect){

    for(int i=0; i< int(vect.size()); i++){

         bool value = g(vect[i]);
        if(value == true){
            victorLastName.push_back(vect[i]);
        }else{
        }
    }

    return victorLastName;
}