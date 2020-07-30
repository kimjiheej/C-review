#include<stdio.h>
int main(void)
{

	char gender;
	int height, weight;

	printf("Enter your gender:");
	scanf_s("%c", &gender);
	
	if (gender == 'F')
	{
		printf("Enter your height:");
		scanf_s("%d", &height);
		printf("Enter your weight:");
		scanf_s("%d", &weight);

		if (height <= weight + 110)
			printf("you need a diet. try harder");
		else
			printf("you don't need a diet. keep exercising");
	}
	else
		printf("Sorry this fitness center is for women only.");
















}