#include<stdio.h>
int main(void)
{

	int num;
	int total = 0;
	int multiple = 1;
	printf("Enter a number:");
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		total += 3;
		multiple *= 3;
		
	}
	
	printf("3�� %d�� ���� ���� %d�̴�.\n", num, total);
	printf("3�� %d�� ���� ���� %d�̴�.", num, multiple);










}