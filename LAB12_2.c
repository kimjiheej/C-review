#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{

	int data[10];
	int total = 0;
	int average;
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		data[i] = rand() % 100;//넣고 프린팅해주기 
		total += data[i];
	}

	average = total / 10;

	printf("평균은 %d\n", average);
	for (int i = 0; i < 10; i++)
		printf("%d ", data[i]);

	












}