#include<stdio.h>
int main(void)
{

    int num;

    printf("Enter a number:");
    scanf_s("%d", &num);

    for (int i = num; i >= 0; i - 2)
    {
        for (int j = 0; j <= (num - i) / 2; j++)
            printf(" ");
        for (int k = 1; k <= i; k++)
            printf("*");
        printf("\n");
    }











}