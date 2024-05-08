#include <stdio.h>

int main(){
    int array[5] = {1, 2, 4, 8, 16};
    int array2[] = {2, 4, 6, 8, 10, 12};

    int i;

    printf("array2[3] == %d\n", array2[3]);
    
    for(i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    
    return 0;
}