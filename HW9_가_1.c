#include<stdio.h>
int main(void)
{

	int num;

	printf("Enter a number:");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		
		for (int k = 0; k < i; k++)
			printf(" ");


		for (int j = 1; j <= num - i; j++)
			printf("*");
		printf("\n");
	}








}