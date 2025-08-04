#include <iostream>
extern int num_count(int array[], int n, int number);

int main() {
    int array[5] = {4,7,6,7,8};
    std::cout << "The number of " << 7 << "'s in the array is: " << num_count(array, 5,7) << std::endl;
    return 0;
}