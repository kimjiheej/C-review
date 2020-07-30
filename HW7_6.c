#include<stdio.h>
int main(void)
{
	int i, number, j;

	
	printf("Enter a number: ");
	scanf_s("%d", &number);
	
	i = 1;
	j = 1;
	while (i <= number)
	{
		printf("%d\n", j);
		j = (j * 10) + 1;
		i++;
		
	}











}