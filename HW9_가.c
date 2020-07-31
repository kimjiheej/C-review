#include<stdio.h>
int main(void)
{

	int num;

	printf("Enter a number:");
	scanf_s("%d", &num);


	for (int i = num; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}






}