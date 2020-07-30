#include<stdio.h>
int main(void)
{

    int num;
    int i = 1;

    printf("Enter a number:");
    scanf_s("%d", &num);

    while (i <= num)
    {
        printf("%d\n", i * i * i);
            i++;
    }












}