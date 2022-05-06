#include <iostream>

int sumOfCube(int n){

    int sum = 0;
    if(n == 1){
        return 1;
    }
    return n*n*n + sumOfCube(n-1);

}

int main(){

    int val = sumOfCube(4);
    std::cout<<val<<std::endl;
}

