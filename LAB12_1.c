#include<stdio.h>
int main(void)
{

	int num;
	int scores[10];
	int total = 0;
	int average;
	printf("Enter the number of scores(0<number<=40): ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("Enter a score: ");
		scanf_s("%d", &scores[i]);
		total += scores[i];
	}
	average = total / num;
	printf("----------------------------------\n");

	printf("Total : %d\n", total);
	printf("Average: %d\n", average);

	for (int i = 0; i < num; i++)
		printf("%d", scores[i]);







}