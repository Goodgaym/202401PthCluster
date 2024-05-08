#include <stdio.h>

int main(){
    int array[8][9];
    int i, j;

    for(i = 2; i <= 9; i++){
        for(j = 1; j <= 9; j++){
            array[i-2][j-1] = i * j;
        }
    }

    for(i = 0; i < 8; i++){
        for(j = 0; j < 9; j++){
            printf("%d  ", array[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}