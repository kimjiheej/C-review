#define SIZE 5 
#include<stdio.h>
int main(void)
{
	int arrayA[SIZE] = { 1,2,3,4,1 };
	int arrayB[SIZE];
	int arrayC[SIZE];
	int i;
	int same;

	for (i = 0; i < SIZE; i++)
	{
		printf("%d", arrayA[i]);
	}
	printf("\n");
	for (i = 0; i < SIZE; i++)
	{
		arrayB[i] = arrayA[i];
	
		printf("%d", arrayB[i]);
	}
	printf("\n");
	for (i = 0; i < SIZE; i++)
	{
		arrayC[i] = arrayA[SIZE - i-1];
		printf("%d", arrayC[i]);
	}
	printf("\n");
	same = 1;
	for (i = 0; i < SIZE; i++)
	
		if (arrayB[i] != arrayA[i])
			same = 0;//Ʋ������ ���� ã�� ���� ������ !1
	
	same = 1;

	if (same)
		printf("ArrayA�� arrayB�� ����\n");
	else
		printf("ArrayA�� arrayB�� �ٸ���\n");

	for (i = 0; i < SIZE; i++)
	
		if (arrayC[i] != arrayA[i])
			same = 0;

	if (same)
		printf("ArrayA�� arrayc�� ����\n");
	else
		printf("ArrayA�� arrayC�� �ٸ���\n");
	









}