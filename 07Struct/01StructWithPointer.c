#include <stdio.h>

// typedef를 이용해 구조체 이름으로 자료형을 선언할 수 있다.
typedef struct
{ 
    int number; // 멤버변수
    char name[20];
    float score;
} student;

void inputStudentInfo(student* std);    // 포인터 구조체 변수를 인자로 받음
void printStudentInfo(student std);     // 구조체 변수를 인자로 받음

int main(){
    student std[4] = {
        { 11017, "강벼리", },
        { 10704, "김성민", },
        { 10809, "김하율", },
        { 10311, "문성준", },
    }; // 학생들 데이터
    float input_score; // 입력받을 데이터
    int i;

    printf("학생들의 성적을 입력하세요.\n");
    for (i = 0; i<4; i++)
    {
        inputStudentInfo(&std[i]);
    }
    
    for (i = 0; i<4; i++){
        printStudentInfo(std[i]);
    }

    return 0;
}

void inputStudentInfo(student* std){
    printf("%d %s 성적 입력 : ", std->number, std->name);  // 포인터 구조체 변수의 멤버 변수에 접근하기 위해선 '->' 연산자 사용
    scanf("%f", &std->score);
}

void printStudentInfo(student std){
    printf("%-7d %s %.2f\n", std.number, std.name, std.score);  // 일반 구조체 변수의 멤버 변수에 접근하기 위해선 '.' 연산자 사용 
}