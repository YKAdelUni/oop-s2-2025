#include "Person.h"

using namespace std;

extern PersonList shallowCopyPersonList(PersonList pl);

int main(){
    PersonList pList;
    pList.numPeople = 5;
    pList.people = new Person[5];
    for (int i = 0; i < 5; i++){
        pList.people[i].age = 1;
        pList.people[i].name = "Jane Doe";
    }
    PersonList personArr2 = shallowCopyPersonList(pList);
    for (int i = 0; i < 5; i++){
        cout << personArr2.people[i].name << " " << personArr2.people[i].age << endl;
    }
    return 0;
}