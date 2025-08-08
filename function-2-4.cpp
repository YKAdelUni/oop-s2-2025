#include <iostream>

int sum_min_max(int integers[], int length){
    if (length < 1) {
        return -1;
    }
}

int array_min(int integers[], int length){
    if (length < 1) {
        return -1;
    }
    int min = integers[0];
    for (int i = 0; i < length; i++){
        if (integers[i] < min) {
            min = integers[i];
        }
    }
    return min;
}

int array_max(int integers[], int length){

}