#include <iostream>
#include <stdlib.h>

extern void hexDigits(int *numbers,int length);

int main(){
    int *numbers = new int[6];
    numbers[0] = 1;
    numbers[1] = 11;
    numbers[2] = 12;
    numbers[3] = 5;
    numbers[4] = 14;
    numbers[5] = 16;
    hexDigits(numbers,6);
    return 0;
}