#include <iostream>
#include <unordered_map>

double weighted_average(int array[], int n){
    if (n < 1){return 0;}
    std::unordered_map<int,int> freq;
    for (int i = 0; i < n; i++){
        freq[array[i]]++;
    }
    int sum;
    sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += (array[i]*freq[array[i]]);
    }
    double weightAvg;
    weightAvg = sum/static_cast<double>(n);
    return weightAvg;
}