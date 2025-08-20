#include <iostream>

extern int *readNumbers();

extern bool equalsArray(int *numbers1,int *numbers2,int length);

int main(){
    int *numberArray1 = readNumbers();
    int *numberArray2 = readNumbers();
    if (equalsArray(numberArray1,numberArray2,10)){
        printf("True");
    } else {printf("False");}
    std::cout << std::endl;
    delete numberArray1, numberArray2;
    return 0;
}