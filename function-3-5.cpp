#include <iostream>

double sum_even(double array[], int n){
    if (n < 1){return 0;}
    double sum;
    sum = 0;
    if (n % 2 == 0){
        for (int i = 0; i < n; i += 2){
            sum += array[i];
        }
    } else {
        for (int i = 0; i < n-1; i += 2){
            sum += array[i];
        }
    }
    return sum;
}