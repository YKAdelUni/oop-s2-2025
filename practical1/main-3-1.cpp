#include <iostream>

extern bool is_fanarray(int array[], int n);

int main(){
    int fanArray[6] = {1,2,3,3,2,1};
    std::cout << is_fanarray(fanArray,6) << std::endl;
    return 0;
}