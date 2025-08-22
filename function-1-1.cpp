#include "Person.h"

Person* createPersonArray(int n){
    Person *personArr = new Person[n];
    for (int i = 0; i < n; i++){
        personArr[i].age = 0;
        personArr[i].name = "John Doe";
    }
    return personArr;
}