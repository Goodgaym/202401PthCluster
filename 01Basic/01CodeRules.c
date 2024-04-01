#include <stdio.h>  // 표준입출력을 포함한 전처리

int main()  // 메인 함수 프로그램 시작지점.
{   // main 함수의 범위를 지정하는 중괄호
    int num1, num2; // ,(콤마)를 사용해도 되지만 확실한 구분을 위해 ;(세미콜론)을 사용하는 것이 좋음
    /*
        int num1;
        int num2;   // 위와 똑같은 방식
    */
    num1 = 1, num2 = 3;
    int num3 = num1 + num2; // 한줄로 처리 가능하지만
    
    /* 
        int num3;
        num3 = num1 + num2; // 이와 같은 방법이 가독성이 좋을 수 있음
    */

    {   // 코드 구분을 위한 중괄호. 이 코드에선 아무 의미없이 가독성만을 위해 사용되었다.
        printf("\"결과\" %d와 %d를 더하면 %d 입니다.\n", num1, num2, num3);
        // 출력문의 \" 는 이스케이프 시퀀스.
        // 일반적인 "(큰따옴표)는 코드에서 문자열을 의미하기 때문에 문자열 안에서 "(큰따옴표)를 표현하기 위해선 \을 이용해 이스케이프 시퀀스를 사용해준다.
   }

    return 0;
}