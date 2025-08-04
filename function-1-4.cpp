#include <iostream>

int sum_two_arrays(int array[], int secondarray[], int n){
    if (n < 1) {
        return 0;
    }
    int arraySum;
    arraySum = 0;
    for (int i = 0; i < n; i++){
        arraySum += array[i];
        arraySum += secondarray[i];
    }
    return arraySum;
}