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
		data[i] = rand() % 100;//�ְ� ���������ֱ� 
		total += data[i];
	}

	average = total / 10;

	printf("����� %d\n", average);
	for (int i = 0; i < 10; i++)
		printf("%d ", data[i]);

	












}