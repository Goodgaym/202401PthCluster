#include <stdio.h>

int main(){
    // 주소값을 저장하는 변수
    // 변수를 주소값을 가리키는 변수
    // 포인터는 4byte 저장공간을 가짐

    int number = 7;
    int* p; // int형 변수의 주소값을 저장하는 포인터 변수
    
    p = &number;

    printf("&number = %x\n", &number);  // number의 주소값
    printf("p = %x\n", p);              // p가 저장하고 있는 주소값
    printf("&p = %x\n", &p);            // p 변수의 주소값
    printf("*p = %d\n", *p);            // p가 가리키고 있는 주소의 값

    // &x : 변수의 주소 (x = 변수이름)
    // *x : 해당 주소의 값 (x = 주소)

    printf("이게뭐야 : %d \n", *(&number)); // *과 &는 서로 반대

    int array[5] = {1, 2, 3, 4, 5};
    p = array;

    printf("array[0] : 0x%x | %d\n", &array[0], array[0]);  // 일반적인 배열 접근
    printf("array : 0x%x | %d\n", array, *array);           // 배열의 이름은 배열의 시작 주소
    printf("array+1 : 0x%x | %d\n", array+1, *(array+1));   // 주소에 연산을 추가하여 '주소'로써 접근
    printf("Pointer : 0x%x | 0x%x | %d\n", &p, p, *p);      // 포인터가 가르키는 배열 사용
    printf("Pointer+1 : 0x%x | %d\n", p+1 , *(p+1));        // 포인터가 가르키는 배열의 주소에 연산을 추가하여 '주소'로써 접근
    printf("Pointer[1]: 0x%x | %d\n", &p[1], p[1]);         // 포인터가 가르키는 배열을 []을 활용하여 '값'으로써 접근

    /* 출력 설명
        array[0]   : array[0]의 주소 값 | array[0]의 값
        array      : array배열 첫번째 요소의 주소값(== &array[0]) | array배열 첫번째 요소의 값
        array+1    : array배열 두번째 요소의 주소값(== &array[1]) | array배열 두번째 요소의 값
        Pointer    : p의 주소값 | p의 값(포인터로 가르키는 주소값) | p가 참조하는 변수의 값  
        Pointer+1  : p가 가르키는 주소의 두번째 주소값 (배열의 두번째 요소) | 두번째 요소가 가지고 있는 값
        Pointer[1] : p가 가르키는 주소의 두번째 주소값 (배열의 두번째 요소) | 두번째 요소가 가지고 있는 값
    */

    return 0;
}