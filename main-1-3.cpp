#include <iostream>

extern void count_digits(int array[4][4]);

int main(){
    int array[4][4] = {
        {4,6,7,3},
        {9,4,0,5},
        {1,7,3,2},
        {5,8,9,8}
    };
    count_digits(array);
    return 0;
}