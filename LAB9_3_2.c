#include<stdio.h>
int main(void)
{
	int score;
	int total = 0;
	while (1)
	{
	
		printf("Enter a score(-1 for exit):");
		scanf_s("%d", &score);
		total += score;

		if (score == -1)
		{
			printf("The total is 0.");
			break;
		}
	}

	printf("The total is %d", total);









}