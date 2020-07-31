#include<stdio.h>
int main(void)
{
	int i = 1;
	int num;
	int sum = 0;
	while (i <= 5)
	{
		do
		{
			printf("0보다 큰 수를 입력 (%d번째): ", i);
			scanf_s("%d", &num);
		} while (num <= 0);

		sum += num;
		i++;
	}















}