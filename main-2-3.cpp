#include <iostream>

extern void two_five_nine(int array[], int n);

int main(){
    int array[5] = {5,9,9,2,10};
    two_five_nine(array,5);
    return 0;
}