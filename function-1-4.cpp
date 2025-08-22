#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl){
    PersonList pl2;
    pl2.numPeople = pl.numPeople;
    pl2.people = pl.people;
    return pl2; 
}