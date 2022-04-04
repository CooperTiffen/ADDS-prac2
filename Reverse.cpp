#include "Reverse.h"

#include <iostream>
#include <string>

using namespace std;

      Reverse::Reverse (){
      }

        int Reverse::reverseDigit(int inpVal){

            int tempVal;

            if(inpVal >0){
            tempVal = inpVal%10;
            revNo = revNo * 10 + tempVal;

            return reverseDigit(inpVal/10);

            }else {
               return revNo;
            }
        }

        std::string Reverse::reverseString(std::string letters){

            std::string newString = letters;
            int len = letters.size()-1;

            if (len != 0){
                rev += letters[len];
                newString = letters.substr(0, letters.size()-1);
                return reverseString(newString);

            }else{
        } return rev + letters[0];
}