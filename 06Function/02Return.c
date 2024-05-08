#include <stdio.h>

int sum(int x, int y){
    int z = x + y;
    
    return z;
}

void noReturn(){
    printf("Before return\n");

    return;

    printf("after return\n");
}

int main(){
    int n1, n2, s;

    printf("더할 값 입력 (n1, n2) : ");
    scanf("%d %d", &n1, &n2);
    
    s = sum(n1, n2);
    printf("%d + %d = %d\n", n1, n2, s);

    noReturn();

    return 0;
}