##include <stdio.h>
void printFibo(int n);
int main(void)
{
    int num, i;
    printf("몇개의 피보나치 수열값을 출력할까요?(3보다 큰 정수): ");
    scanf_s("%d", &num);
    for (i = 0; i < num; i++)
        printFibo(i);




    printf("\n");



}

void printFibo(int n)
{
    int a = 0;
    int b = 1;
    int c;

    for (int i = 1; i <= n; i++)
    {
        printf("%d", c);
        a = b;
        b = c;
        c = a + b;





    }

    return;
}
