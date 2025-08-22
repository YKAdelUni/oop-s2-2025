#include "Person.h"

using namespace std;

extern Person* createPersonArray(int n);

int main(){
    Person *personArr = createPersonArray(5);
    for (int i = 0; i < 5; i++){
        cout << personArr[i].name << " " << personArr[i].age << endl;
    }
    return 0;
}