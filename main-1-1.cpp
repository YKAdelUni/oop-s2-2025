#include <iostream>

extern int *readNumbers();

extern void printNumbers(int *numbers,int length);

int main(){
    int *numberArray = readNumbers();

    printNumbers(numberArray,10);

    delete numberArray;

    return 0;
}