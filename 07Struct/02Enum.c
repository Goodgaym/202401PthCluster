#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef enum menu{ 
    START, CHECK, RESET, QUIT
} menu;

int main(){
    menu select;
    srand(time(NULL));

    int answer, input; 
    answer = rand()%100 +1;
    
    while(1)
    {
        printf("메뉴 선택\n 1. 숫자 입력\n 2. 답 확인\n 3. 답 리셋\n 4. 종료\n");
        scanf("%d", &select);

        switch(select)
        {
            case START:
                printf("숫자를 입력하세요 : "); scanf("%d", &input);
                if(input == answer) 
                    printf("정답입니다!\n");
                else 
                    printf("틀렸습니다!\n");
                break;

            case CHECK: 
                printf("정답은 %d 입니다.\n", answer);
                break;

            case RESET:
                printf("답을 리셋합니다. 이전 답은 %d 입니다.\n", answer);
                answer = rand()%100 +1;
                break;

            case QUIT:
                printf("프로그램을 종료합니다.\n");
                return 0;

            default:
                printf("메뉴에 없습니다.\n");
        }
    }

    return 0;
}