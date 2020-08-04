#include<stdio.h>
#define SIZE 10
int main(void)
{

	int odd[SIZE];
	int even[SIZE];
	int num;

	int i, oddindex = 0, evenindex = 0;

	for (int i = 0; i < SIZE; i++)
	{
		printf("Enter a number:");
		scanf_s("%d", &num);

		if (num % 2 == 0)
		{
			
			even[evenindex] = num;
			evenindex++;//배열은 0부터 시작하기 때문에 나중에 더해주어야함.
		}
		else
		{
			
			odd[oddindex] = num;
			oddindex++;
		}
	}

	for (int i = 0; i < oddindex; i++)
	{
		printf("%d ", odd[i]);
	}
	printf("\n");
	for (int i = 0; i < evenindex; i++)
	{
		printf("%d ", even[i]);
	}






}