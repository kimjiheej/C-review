##include <stdio.h>
void printFibo(int n);
int main(void)
{
    int num, i;
    printf("��� �Ǻ���ġ �������� ����ұ��?(3���� ū ����): ");
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
