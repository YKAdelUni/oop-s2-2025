#include <iostream>
#include <vector>

int *readNumbers(){
    int *numberArr = new int[10];
    for (int i = 0; i < 10; i++){
        std::cin >> numberArr[i];
    }
    return numberArr;
}

int secondSmallestSum(int *numbers,int length){
    std::vector<int> sumVec;
    for (int i = 0; i < length; i++){
        int sum = 0;
        for (int j = i; j < length; j++){
            sum += numbers[j];
            sumVec.push_back(sum);
            // for (int k = 0; k <= j; k++){
            //     sum += numbers[k];
            // }
        }
    }
    std::sort(sumVec.begin(),sumVec.end());
    return sumVec.at(1);
}