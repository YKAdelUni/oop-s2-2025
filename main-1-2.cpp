#include "Person.h"

using namespace std;

extern PersonList createPersonList(int n);

int main(){
    PersonList personArr = createPersonList(5);
    for (int i = 0; i < 5; i++){
        cout << personArr.people[i].name << " " << personArr.people[i].age << endl;
    }
    return 0;
}