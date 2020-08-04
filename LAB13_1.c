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
			same = 0;//틀린것을 먼저 찾는 것이 빠르다 !1
	
	same = 1;

	if (same)
		printf("ArrayA와 arrayB는 같다\n");
	else
		printf("ArrayA와 arrayB는 다르다\n");

	for (i = 0; i < SIZE; i++)
	
		if (arrayC[i] != arrayA[i])
			same = 0;

	if (same)
		printf("ArrayA와 arrayc는 같다\n");
	else
		printf("ArrayA와 arrayC는 다르다\n");
	









}