#include <iostream>

extern int sum_min_max(int integers[], int length);

extern int array_min(int integers[], int length);

extern int array_max(int integers[], int length);

int main(){
    int array[6] = {3,2,7,4,5,6};
    std::cout << sum_min_max(array,6) << std::endl;
    return 0;
}