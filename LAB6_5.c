#include<stdio.h>
int main(void)
{

	char grade;
	int score;

	printf("Enter a score:");
	scanf_s("%d", &score);

	if (score >= 80)
	{
		printf("The grade is A!");
	}
	else if (score >= 50 && score < 80)
	{
		printf("The grade is B!");
	}
	else if (score >= 30 && score < 50)
	{
		printf("The grade is C!");
	}
	else
		printf("The grade is F!");











}