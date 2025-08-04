#include <iostream>

extern double sum_even(double array[], int n);

int main(){
    double array[5] = {5,9,9,2,10};
    sum_even(array,5);
    return 0;
}