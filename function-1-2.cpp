#include "Person.h"

PersonList createPersonList(int n){
    PersonList pList;
    // pList = new PersonList;
    pList.numPeople = n;
    pList.people = new Person[n];
    for (int i = 0; i < n; i++){
        pList.people[i].age = 1;
        pList.people[i].name = "Jane Doe";
    }
    return pList;
}