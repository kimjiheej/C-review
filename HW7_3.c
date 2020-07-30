#include<stdio.h>
int main(void)
{
	int num;
	int multiple = 1;
	int i;
	printf("Enter a number:");
	scanf_s("%d", &num);

	
	i = num;

	while (i >= 1)
	{
		multiple *= i;
		i--;

	}
	printf("%d의 Factorial 값은 %d이다", num ,multiple);





}