#include "workshop.h"

extern void changeValue(double*);

using namespace std;

int main(){
    double d = 0; //declare double
    double* dPointer = &d; //set address
    char c = 'p';
    char* cPointer = &c;
    cout << d << endl;
    cout << dPointer << endl;
    cout << &cPointer << endl;
    changeValue(dPointer);
    cout << *dPointer << endl;
    double dArr[5] = {1,3,5,2,4};
    printArray(dArr,5);
    cout << arrayMax(dArr,5) << endl;
    printArray(dynamicArray(5,4),5);
    double* dynArr = dynamicArray(5,4);
    cout << arrayMax(dArr,5) << endl;
}