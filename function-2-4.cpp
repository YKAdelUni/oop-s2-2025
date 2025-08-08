#include <iostream>

int sum_min_max(int integers[], int length){

}

int array_min(int integers[], int Length){
    if (Length < 1) {
        return -1;
    }
    int min = integers[0];
    for (int i = 0; i < Length; i++){
        if (integers[i] < min) {
            min = integers[i];
        }
    }
    return min;
}

int array_max(int integers[], int length){

}