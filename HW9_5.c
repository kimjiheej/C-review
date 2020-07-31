#include<stdio.h>
int main(void)
{
	int i = 0;
	int num;
	int k = 1;
	printf("Enter a number:");
	scanf_s("%d", &num);

	while (k <= num)
	{
		k *= 2;
		i++;
	}
	printf("%d", i-1);








}