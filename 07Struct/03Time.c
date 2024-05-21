#include <stdio.h>
#include <time.h>

int main(){
    time_t rawTime;
    rawTime = time(NULL);

    printf("%lld\n", rawTime);  // 1970년 1월 1일 00시 00분 에서부터 초

    struct tm* pLocalTime;
    
    pLocalTime = localtime(&rawTime);

    printf("year : %d ", pLocalTime->tm_year + 1900);   // 1900년 부터 지금까지의 지나온 연도를 저장하고 있기 때문에 1900을 더해주어야 함 
    printf("month : %d ", pLocalTime->tm_mon + 1);      // 월은 0부터 시작하기 때문에 1을 더해주어야 함
    printf("day : %d ", pLocalTime->tm_mday);
    printf("week : %d ", pLocalTime->tm_wday);
    printf("hour : %d ", pLocalTime->tm_hour);
    printf("minute : %d ", pLocalTime->tm_min);
    printf("seconds : %d ", pLocalTime->tm_sec);

    return 0;
}