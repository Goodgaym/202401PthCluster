#include <stdio.h>

// typedef�� �̿��� ����ü �̸����� �ڷ����� ������ �� �ִ�.
typedef struct
{ 
    int number; // �������
    char name[20];
    float score;
} student;

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
        // �л��� ���� �Է�
        printf("%d %s ���� �Է� : ", std[i].number, std[i].name);  
        scanf("%f", &input_score);
        std[i].score = input_score;
    }

    for (i = 0; i<4; i++)
    {
        printf("%-7d %s %.2f\n", std[i].number, std[i].name, std[i].score);
    }

    return 0;
}