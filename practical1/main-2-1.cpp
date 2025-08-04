#include <iostream>
extern int min_element(int array[], int n);

int main() {
    int array[5] = {4,7,6,7,8};
    std::cout << "The minimum in the array is: " << min_element(array, 5) << std::endl;
    return 0;
}