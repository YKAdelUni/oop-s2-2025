#include <iostream>

int is_identity(int array[10][10]){
    int isIDOnes = 0;
    int isIDZeroes = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (array[i][j] == 1){
                isIDOnes++;
            } else if (array[i][j] == 0){
                isIDZeroes++;
            }
        }
    }
    if (isIDOnes == 10 && isIDZeroes == 90){
        return 1;
    } else {
        return 0;
    }
}