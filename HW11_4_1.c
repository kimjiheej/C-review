#include <stdio.h>

int isPrime(int a);

int main()
{
	int input;

	while (1)
	{
		printf("Enter a number(-1 for exit): ");
		scanf_s("%d", &input);
		if (input == -1)   return 0;

		if (isPrime(input) == 1)	printf("�Ҽ��Դϴ�\n");
		if (isPrime(input) == 0)	printf("�Ҽ��� �ƴմϴ�.\n");
	}

	return 0;
}

int isPrime(int num)
{
	int j;

	for (j = 2; j <= num; j++)
	{
		if (num % j == 0)
		{
			if (num == j)	return 1;
			if (num != j)	return 0;
		}
	}

	return 0;
}