#include<stdio.h>
int main(void)
{


	int num;
	int scores[100];
	printf("Enter the number of scores(<=20>: ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("Enter a score:");
		scanf_s("%d", &scores[i]);
	}
	
	for (int i = 0; i < num; i++)
	{
		printf("Student   %d: ",i+1);
		for (int j = 1; j <= scores[i]; j++)
			printf("*");
		printf("\n");
	}
	





}