#include<stdio.h>
int main(void)
{

	int num;

	printf("Enter a number(���):");
	scanf_s("%d", &num);

	while (num < 0)
	{
		printf("Enter a number(���):");
		scanf_s("%d", &num);

	}
	printf("�Էµ� ����� %d", num);
	












}