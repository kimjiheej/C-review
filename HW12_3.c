#include<stdio.h>
int main(void)
{

	int index[100];
	int best;
	int bestindex;
	int total = 0;
	double average;
	for (int i = 0; i < 7; i++)
	{
		printf("Enter the income of day %d: ", i + 1);
		scanf_s("%d", &index[i]);
		total += index[i];
	}
	printf("------------------------------------\n");
	
	best = index[0];
	for (int i = 0; i < 7; i++)
	{
		if (best < index[i])
			best = index[i];
		bestindex = i;
	}
	printf("The best income: %d in day %d\n", best, bestindex-1);

	printf("-------------------------------------\n");

	printf("The total is %d\n", total);
	average = (double)total / 7;
	printf("The average is %.1f\n", average);


	for (int i = 0; i < 7; i++)
	{
		if (average < index[i])
			printf("day %d: %d", i+1, index[i]);
	}








}