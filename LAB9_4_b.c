#include<stdio.h>
int main(void)
{

    int i = 1;
    int num;
    int sum = 0;
    while (i <= 5)
    {
        printf("0���� ū ���� �Է� (%d��°)': ", i);
        scanf_s("%d", &num);

        while (num <= 0)
        {
            printf("0���� ū ���� �Է� (%d��°)': ", i);
            scanf_s("%d", &num);
        }
        sum += num;
        i++;

    }
    printf("�Էµ� ���� �� ��: %d", sum);












}