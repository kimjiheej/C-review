#include<stdio.h>
int main(void)
{

	int num;

	printf("Enter a number(양수):");
	scanf_s("%d", &num);

	while (num < 0)
	{
		printf("Enter a number(양수):");
		scanf_s("%d", &num);

	}
	printf("입력된 양수는 %d", num);
	












}