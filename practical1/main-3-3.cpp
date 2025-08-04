#include <iostream>

extern double weighted_average(int array[], int n);

int main(){
    int array[5] = {5,9,9,2,10};
    weighted_average(array,5);
    return 0;
}