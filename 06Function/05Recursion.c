#include <stdio.h>

int factorial(int x);

int main(){
    int n;
    int i;
    int f_result = 1, r_result;
    
    printf("팩토리얼 값을 입력하세요 : ");
    scanf("%d", &n);

    // 반복문 팩토리얼
    for(i = 1; i <= n; i++){
        f_result *= i;
    }

    printf("반복문 사용 : %d! = %d\n",n , f_result);

    r_result = factorial(n);
    
    printf("재귀 사용 : %d! = %d\n",n , r_result);

    return 0;

    // f(n) = f(n-1) + f(n-2)
    scanf("%d", &n);
    
    printf("%d\n", fib(n)); 
}

int factorial(int x){
    if (x == 1){
        return 1;
    }
    else {
        return x * factorial(x-1);
    }
}