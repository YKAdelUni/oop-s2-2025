#include <iostream>

extern int *readNumbers();

extern int secondSmallestSum(int *numbers,int length);

int main(){
    int *numberArray = readNumbers();

    std::cout << secondSmallestSum(numberArray,10) << std::endl;

    delete numberArray;

    return 0;
}