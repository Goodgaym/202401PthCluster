#include <stdio.h>

int main(){
    int scores[40]; // 성적
    int sum = 0;    // 합계
    int std;        // 학생수
    int i;          // 인덱스
    float avg;      // 평균

    printf("성적을 입력할 학생 수 : ");
    scanf("%d", &std);

    // 학생마다 성적 입력
    for(i = 0; i < std; i++){   // i = 0 부터 i < std 까지 반복 시작
        printf("%d번 학생 성적 : ", i+1);   // 출력
        scanf("%d", &scores[i]);    // scores[i] 입력
    }

    for(i = 0; i < std; i++){
        sum += scores[i]; // sum = sum + scores[i];
    }
    
    avg = (float)sum / (float)std;
    
    printf("성적 합계 : %d\n", sum);
    printf("성적 평균 : %f\n", avg);

    return 0;
}