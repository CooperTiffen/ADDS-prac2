#include "Individual.h"

//A constructor that takes in the length of the binary DNA and creates the binary string
Individual::Individual(int k){

    for(int i = 0; i<k; i++){

        binaryString.push_back('0');
    }

}

//A constructor that takes in a binary string and creates a new Individual with an identical list.
Individual::Individual(std::string DNA){

    binaryString = DNA;
}

//outputs a binary string representation of the bitstring list
std::string Individual::getString(){

    return this->binaryString;
}

//returns the bit value at position pos. It should return -1 if pos is out of bound.
int Individual::getBit(int pos){

    if(pos>(int)binaryString.length()-1){
        return -1;
    }
    else if(pos<0){
        return -1;
    }
    return int(binaryString[pos])-48;
}

//takes in the position of the certain bit and flip the bit value.
void Individual::flipBit(int pos){

    if(binaryString[pos]=='0'){

        binaryString[pos] = '1';
    }
    else if(binaryString[pos]=='1'){

        binaryString[pos] = '0';
    }
}

//returns the longest consecutive sequence of ‘1’ digits in the list.
int Individual::getMaxOnes(){

    int max = 0;

    for(int i = 0; i<(int)binaryString.length();i++){

        if(binaryString[i]=='1'){

            int currpos = i;
            while(binaryString[i] == '1'){

                if(i>=(int)binaryString.length()){
                    break;
                }
                i++;
            }

            if(max<i-currpos){
                max = i-currpos;
            }
        }
    }
    return max;
}

//returns the length of the list.
int Individual::getLength(){
    return binaryString.length();
}