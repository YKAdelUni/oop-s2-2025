#include <iostream>

void changeValue(double* n){
    *n = 42;
}

void printArray(double* arr, int n){
    for (int i = 0; i < n; i++){
        std::cout << arr[i] << " "; 
    }
    std::cout << std::endl;
}

double arrayMax(double* arr, int n){
    double max = 0;
    for (int i = 0; i < n; i++){
        if (arr[i] >= max){
            max = arr[i];
        }
    }
    return max;
}

double* dynamicArray(int n, double m){
    double* dynArr = new double[n];
    for (int i = 0; i < n; i++){
        dynArr[i] = m;
    }
    return dynArr;
}