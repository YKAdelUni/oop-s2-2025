#include <iostream>

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main(){
    int binaryArray[7] = {1,0,1,1,0,1,1};
    std::cout << binary_to_int(binaryArray,7) << std::endl;
    return 0;
}