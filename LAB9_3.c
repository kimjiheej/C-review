#include<stdio.h>
int main(void)
{
	int score;
	int total = 0;
	printf("Enter a score(-1 for exit):");
	scanf_s("%d", &score);

	while (score != -1)
	{   
		total += score;
		printf("Enter a score(-1 for exit):");
		scanf_s("%d", &score);
		
	}

	printf("The total is %d.", total);











}