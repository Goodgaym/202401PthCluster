#include <stdio.h>

int main(){
    int scores[40]; // ����
    int sum = 0;    // �հ�
    int std;        // �л���
    int i;          // �ε���
    float avg;      // ���

    printf("������ �Է��� �л� �� : ");
    scanf("%d", &std);

    // �л����� ���� �Է�
    for(i = 0; i < std; i++){   // i = 0 ���� i < std ���� �ݺ� ����
        printf("%d�� �л� ���� : ", i+1);   // ���
        scanf("%d", &scores[i]);    // scores[i] �Է�
    }

    for(i = 0; i < std; i++){
        sum += scores[i]; // sum = sum + scores[i];
    }
    
    avg = (float)sum / (float)std;
    
    printf("���� �հ� : %d\n", sum);
    printf("���� ��� : %f\n", avg);

    return 0;
}