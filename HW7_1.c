#include<stdio.h>
int main(void)
{
	char grade;
	int score;

	printf("Enter your grade:");
	scanf_s("%d", &grade);

	switch (grade)
	{
	case 'A':
		printf("Congratulation");
		break;
	case 'B':
		printf("Okay, try harder");
		break;
	case 'C':
	{
		printf("Enter your score:");
		scanf_s("%d", &score);
		printf("Try harder, you need to get %d next time", score + 10);
		break;
	}
	case 'D'||'F':
		printf("Sorry, you should take this course again");
		break;
	default:
		printf("Wrong grade");
		break;
	}













}