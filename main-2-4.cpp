#include <iostream>

extern bool is_ascending(int array[], int n);

int main(){
    int array[5] = {4,6,7,8,9};
    if (is_ascending(array,5) == true){
        std::cout << "The array is in ascending order" << std::endl;
    } else {
        std::cout << "The array is NOT in ascending order" << std::endl;
    }
    return 0;
}