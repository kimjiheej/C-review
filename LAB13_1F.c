#include<stdio.h>
#define SIZE 5
void printArray(int a[], int size);
int equalArray(int a[], int b[], int size);
int main(void)
{
	int arrayA[SIZE] = { 1,2,3,4,1 };
	int arrayB[SIZE];
	int arrayC[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		arrayB[i] = arrayA[i];
		arrayC[i] = arrayA[5 - i - 1];
	}
	printArray(arrayA, SIZE);
	printf("\n");
	printArray(arrayB, SIZE);
	printf("\n");
	printArray(arrayC, SIZE);
	printf("\n");
	if (equalArray(arrayA, arrayB, SIZE) == 1)
		printf("ArrayA�� arrayB�� ����\n");
	else
		printf("ArrayA�� arrayB�� �ٸ���\n");

	if (equalArray(arrayA, arrayC, SIZE) == 1)
		printf("ArrayA�� arrayC�� ����\n");
	else
		printf("ArrayA�� arrayC�� �ٸ���\n");


}
void printArray(int a[], int size)
{
	for (int i = 0; i < SIZE; i++)
		printf("%d ", a[i]);


}
int equalArray(int a[], int b[], int size)//�׳� �迭 �̸��� ������ �� �� �����. �׸��� �����ؾ� �Ұ��� �ڷ���� �ٿ��־�� ��. �Լ��� �����߱� ����.
{
	for (int i = 0; i < SIZE; i++)
		if (a[i] != b[i])
			return 0;
	return 1;



}//void �Լ��� return �� ���� void�� �ƴ� �Լ��� return�� ����.