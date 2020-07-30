#include<stdio.h>
int main(void)
{

	int num;
	int total = 0;
	int score;
	int i;

	printf("Enter a student number:");
	scanf_s("%d", &num);

	i = 1;
	if (num == 0)
		total = 0;
	else
	{

		while (i <= num)
		{
			printf("Enter a score:");
			scanf_s("%d", &score);
			total += score;
			i++;
		}
	}

	printf("The total is %d", total);













}