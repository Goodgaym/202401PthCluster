#include <stdio.h>

int main(){
    int i = 0;

    while(i < 10)    // i가 0~9까지 실행 (끝나면 i==10)
    {
        printf("Loop : %d\n", i);
        i++;
    }

    // do while문은 반복문 안의 코드가 한번은 실행되고 조건에 의해 반복문의 처리가 이루어진다.

    i = 11;
    do
    {
        printf("do while : %d\n", i);
        if (i == 11) i = 0;
        else i++;
    } while (i < 10);

    // while(1){
    //     printf("무한루프\n");    // 실행 중엔 ctrl+c로 빠져나올 수 있음
    // }

    return 0;
}