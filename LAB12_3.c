#include<stdio.h>
int main(void)
{

	int days[7];
	int best;
	for (int i = 0; i < 7; i++)
	{
		printf("Enter the income: ");
		scanf_s("%d", &days[i]);
	}

	printf("----------------------------\n");

	best = days[0];

	for (int i = 0; i < 7; i++)
	{
		if (best < days[i])
			best = days[i];
	}
	printf("The bset income is %d\n", best);
	
	for (int i = 0; i < 7; i++)
		printf("%d ", days[i]);




}