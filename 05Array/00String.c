#include <stdio.h>

int main(){
    char string[7] = "string";  // char들의 배열 = 문자열
    char string2[7] = {'s', 't', 'r', 'i', 'n', 'g', '\0'};
    char string3[7];

    string3[0] = 's';
    string3[1] = 't';
    string3[2] = 'r';
    string3[3] = 'i';
    string3[4] = 'n';
    string3[5] = 'g';
    string3[6] = '\0';

    printf("%s\n", string);
    printf("%s\n", string2);
    printf("%s\n", string3);

    char input[11];

    scanf("%s", input);
    printf("input : %s\n", input);
    
    return 0;

}