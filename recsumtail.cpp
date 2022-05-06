#include <iostream>

int sumOfCube(int n, int sum){
    if(n == 1){
        return sum;
    }
    return sumOfCube(n-1, sum+n*n*n);
}

int sumOfCube(int n){
    return sumOfCube(n, 1);
}



int main(){

    int val = sumOfCube(5);
    std::cout<<val<<std::endl;

}

