#include<stdio.h>
int main(void)
{

	char operator;
	int first, second;
	int result;
	int answer;

	printf("Enter an operator:");
	scanf_s("%c", &operator);
	printf("Enter the first operand:");
	scanf_s("%d", &first);
	printf("Enter the second operand:");
	scanf_s("%d", &second);

	switch (operator)
	{
	case '+':
	{
		result = first + second;
		break;
	}
	case '*':
		result = first * second;
		break;
	}
	
	printf("%d %c %d = ", first, operator,second);
	scanf_s("%d", &answer);
	
	if (answer == result)
	
		printf("Right answer");
	else
	{
		printf("Wrong!\n");
		printf("%d is the right answer", result);
	}











}