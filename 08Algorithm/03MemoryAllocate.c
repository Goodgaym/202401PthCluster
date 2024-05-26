#include <stdio.h>
#include <stdlib.h>

int main(){
    int *array, i, size = 3;
    // malloc : 초기화없이 메모리 동적 할당
    // calloc : 0으로 초기화 하며 메모리 동적 할당

    //array = (int*)malloc(sizeof(int) * size);
    array = (int*)calloc(size, sizeof(int));
    
    //void* malloc(size) : size = 할당할 메모리의 크기
    //void* calloc(count, size) : count = 변수 개수, size = 할당할 변수의 크기

    /*
    array[0] = 12;
    array[1] = 23;
    array[2] = 34;
    */

    for(i = 0; i < size; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }

    free(array);    // 메모리 해제

    return 0;
}