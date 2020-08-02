#include<stdio.h>
int main(void)
{

	int data[20];
	
	int num;
	printf("Enter a number:");
	scanf_s("%d", &num);

		for (int i = 0; i < 20; i++)
		{
			data[i] = num * (i + 1);
	}

		for (int i = 0; i < 20; i++)
		{
			printf("%5d", data[i]);

			if (i % 5 == 4)
				printf("\n");
		}










}