#include <stdio.h>

void swap(int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(){
    int x, y;

    x = 3, y = 7;
    
    printf("before swap : x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("after swap : x = %d, y = %d\n", x, y);

    return 0;
}