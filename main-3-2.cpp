#include <iostream>

extern int *readNumbers();

extern int *reverseArray(int *numbers1, int length);

extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main(){
    int *numberArray1 = readNumbers();
    int *numberArray2 = reverseArray(numberArray1,10);
    if (equalsArray(numberArray1,numberArray2,10)){
        printf("True");
    } else {printf("False");}
    std::cout << std::endl;
    delete numberArray1;
    delete numberArray2;
    return 0;
}