#include <iostream>
extern int max_element(int array[], int n);

int main() {
    int array[5] = {4,7,6,7,8};
    std::cout << "The maximum in the array is: " << max_element(array, 5) << std::endl;
    return 0;
}