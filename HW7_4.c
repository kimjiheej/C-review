#include <Stdio.h>
int main(void)
{
	int score, number, i, total;
	double average;

	i = 0;
	total = 0;

	printf("Enter a student number: ");
	scanf_s("%d", &number);

	while (i < number)
	{
		printf("Enter a score: ");
		scanf_s("%d", &score);
		total += score;
		
		i++;
	}
	average = (double)total / number;
	if (number == 0)
       average = 0;
	
	

	
	

	printf("The total is %d\n", total);
	printf("The average is %.1f\n", average);
}