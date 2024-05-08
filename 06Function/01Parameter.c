#include <stdio.h>

void oneParameter(int x){
    printf("one parameter : %d\n", x);
}

void twoParameter(int x, int y){
    printf("two parameters : %d %d\n", x, y);
}

int main(){
    oneParameter(7);

    twoParameter(1, 3);

    int number;
    scanf("%d", &number);

    oneParameter(number);
   
    return 0;
}