#include<stdio.h>
int main(void)
{

    int i = 1;
    int num;
    int total = 0;
    while (i <= 5)
    {
        printf("0���� ū ���� �Է�(%d��°): ", i);
        scanf_s("%d", &num);
        total += num;
        i++;
    }
    printf("�Էµ� ���� �� ��: %d", total);









}