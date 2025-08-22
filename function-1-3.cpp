#include "Person.h"

PersonList deepCopyPersonList(PersonList pl){
    PersonList pl2;
    pl2.numPeople = pl.numPeople;
    pl2.people = new Person[pl.numPeople];
    for (int i = 0; i < pl.numPeople; i++){
        pl2.people[i].age = pl.people[i].age;
        pl2.people[i].name = pl.people[i].name;
    }
    return pl2; 
}