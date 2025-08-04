#include <iostream>

int median_array(int array[], int n){
    if (n <= 0 || n % 2 == 0) {
        return 0;
    }
    int temp;
    int median;
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (array[j] > array[j+1]) {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    median = array[n/2];
    return median;
}