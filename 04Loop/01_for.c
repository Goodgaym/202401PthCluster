#include <stdio.h>

int main(){
    int i, sum = 0;

    for(/*{초기식}*/; /*{조건식}*/; /*{증감식}*/)
    {
        /*{반복할 코드}*/
    }

    for(i = 1; i < 10; i++) // i가 0~9 까지 실행
    {
        printf("Loop : %d\n", i);
        sum++; // sum += i;
    }
    printf("1 ~ 10 까지의 합 = %d", sum);

    // continue 문 사용
    for(i = 1; i<= 100; i++)       // i가 1~100 까지 실행
    {
        if(i%10 == 0)   // i가 10의 배수 일때
        {      
            printf("\n");   
            continue;
        }
        printf("%d ", i); 
    }

    // 무한루프
    // for(;;) 
    // {
    //     printf("무한루프\n");
    // }
    
    int answer;
    
    printf("비밀번호를 입력하세요. :");
    for(;;)
    {
        scanf("%d", &answer);
        if(answer == 7)
        {
            printf("맞았습니다!\n");
            break; // break문을 이용하여 무한 루프 탈출
        }
        else
        {
            printf("틀렸습니다.\n");
        }
    }

    return 0;
}