#include <stdio.h>

// typedef�� �̿��� ����ü �̸����� �ڷ����� ������ �� �ִ�.
typedef struct
{ 
    int number; // �������
    char name[20];
    float score;
} student;

void inputStudentInfo(student* std);    // ������ ����ü ������ ���ڷ� ����
void printStudentInfo(student std);     // ����ü ������ ���ڷ� ����

int main(){
    student std[4] = {
        { 11017, "������", },
        { 10704, "�輺��", },
        { 10809, "������", },
        { 10311, "������", },
    }; // �л��� ������
    float input_score; // �Է¹��� ������
    int i;

    printf("�л����� ������ �Է��ϼ���.\n");
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
    printf("%d %s ���� �Է� : ", std->number, std->name);  // ������ ����ü ������ ��� ������ �����ϱ� ���ؼ� '->' ������ ���
    scanf("%f", &std->score);
}

void printStudentInfo(student std){
    printf("%-7d %s %.2f\n", std.number, std.name, std.score);  // �Ϲ� ����ü ������ ��� ������ �����ϱ� ���ؼ� '.' ������ ��� 
}