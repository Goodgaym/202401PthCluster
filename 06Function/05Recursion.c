#include <stdio.h>

int factorial(int x);

int main(){
    int n;
    int i;
    int f_result = 1, r_result;
    
    printf("���丮�� ���� �Է��ϼ��� : ");
    scanf("%d", &n);

    // �ݺ��� ���丮��
    for(i = 1; i <= n; i++){
        f_result *= i;
    }

    printf("�ݺ��� ��� : %d! = %d\n",n , f_result);

    r_result = factorial(n);
    
    printf("��� ��� : %d! = %d\n",n , r_result);

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