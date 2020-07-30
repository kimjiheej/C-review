#include<stdio.h>
int main(void)
{
	int num;

	printf("Enter a number:");
	scanf_s("%d", &num);

	while (num!=0)
	{
		printf("%d", num % 2);
		num /= 2;
	}

	//num이 0이 아닐때까지 하면 됨.






}