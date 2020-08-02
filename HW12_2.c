#include<stdio.h>
int main(void)
{


	int num;
	int average;
	int total = 0;
	int data[100];
	printf("Enter the number of random numbers: (<=100>: ");
	scanf_s("%d", &num);

	srand(time(NULL));
	for (int i = 0; i < num; i++)
	{
		data[i] = rand() % 100;
		total += data[i];
	}
	average = total / num;
	printf("난수의 평균은 %d\n", average);
	for (int i = 0; i < num; i++)
	{
		printf("%5d", data[i]);
		if (i % 5 == 4)
			printf("\n");

	}













}