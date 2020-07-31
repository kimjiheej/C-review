#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{

	srand(time(NULL));//int 선언 전에 작성해주기 
	int answer, result;
	int num1 = rand() % 100;
	int num2 = rand() % 100;
	

	printf("%d + %d = ", num1, num2);
	result = num1 + num2;
	scanf_s("%d", &answer);
	
	if (answer == result)
		printf("Your answer is right.\n");
	else
	{
		printf("Your answer is wrong.\n");
		printf("%d is the right answer\n", result);
	}







}