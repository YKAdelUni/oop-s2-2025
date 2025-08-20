#include <iostream>

int *readNumbers(){
    int *numberArr = new int[10];
    for (int i = 0; i < 10; i++){
        std::cin >> numberArr[i];
    }
    return numberArr;
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