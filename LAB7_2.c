#include<stdio.h>
int main(void)
{

	char operator;
	int first, second, result;
	printf("Enter an operator:");
	scanf_s("%c", &operator);
	printf("Enter the first operand:");
	scanf_s("%d", &first);
	printf("Enter the second operand:");
	scanf_s("%d", &second);

	switch (operator)
	{
	case '+':
		result = first + second;
		break;
	case '*':
		result = first * second;
		break;
	case '-':
		result = first - second;
		break;
	}

	printf("%d %c %d = %d", first, operator,second, result);










}