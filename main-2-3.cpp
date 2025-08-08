#include <iostream>

extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements (int integers[], int length);
extern int sum_if_palindrome (int integers[], int length);

int main(){
    int array[5] = {1,2,1,2,1};
    std::cout << sum_if_palindrome(array,5) << std::endl;
    return 0;
}