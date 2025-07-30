#include <iostream>

extern int array_sum(int array[], int secondarray[], int n);

int main() {
    int array[5] = {1,2,3,4,5};
    int secondarray[5] = {6,7,8,9,10};
    std::cout << "The sum of all numbers in these two arrays is " << array_sum(array, secondarray, 5) << std::endl;
    return 0;
}