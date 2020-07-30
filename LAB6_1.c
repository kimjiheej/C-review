#include<stdio.h>
int main(void)
{

	int weight, height;

	
	printf("Enter your height:");
	scanf_s("%d", &height);
	printf("Enter your weight:");
	scanf_s("%d", &weight);

	if (height <= weight + 110)
	{
		printf("you need a dit.\n");
		printf("BYE");
	}
	else
	{
		printf("BYE");
	}








}