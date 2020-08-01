#include<stdio.h>
void print_divisor(int a);
int main(void)
{
	int num;

	printf("Enter a number:");
	scanf_s("%d", &num);

	print_divisor(num);


}
void print_divisor(int a)
{
	int i;
	for (i = 1; i <= a; i++)
		if (a % i == 0)
			printf("%d\n", i);




}