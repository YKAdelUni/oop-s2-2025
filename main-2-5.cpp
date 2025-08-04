#include <iostream>

extern bool is_descending(int array[], int n);

int main(){
    int array[5] = {4,6,7,8,9};
    if (is_descending(array,5) == true){
        std::cout << "The array is in descending order" << std::endl;
    } else {
        std::cout << "The array is NOT in descending order" << std::endl;
    }
    return 0;
}