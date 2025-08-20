#include <iostream>

int *readNumbers(){
    int *numberArr = new int[10];
    for (int i = 0; i < 10; i++){
        std::cin >> numberArr[i];
    }
    return numberArr;
}

int *reverseArray(int *numbers1, int length){
    int *newArray = new int[length];
    for (int i = 0; i < length; i++){
        newArray[i] = 0;
    }
    int revLength = length;
    for (int i = 0; i < length; i++){
        revLength--;
        newArray[i] = numbers1[revLength];
    }
    return newArray;
}

bool equalsArray(int *numbers1,int *numbers2,int length){
    if (length < 1){
        return false;
    }
    for (int i = 0; i < length; i++){
        if (numbers1[i] != numbers2[i]){
            return false;
        }
    }
    return true;
}