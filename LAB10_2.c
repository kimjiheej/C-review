#include<stdio.h>
void number(int a, int b);
int main(void)
{
	int num1, num2;
	printf("Enter two numbers:");
	scanf_s("%d %d", &num1, &num2);
	number(num1, num2);
}
void number(int a, int b)
{
	int best;
	if (a >= b)
		best = a;
	else
		best = b;
	printf("Big number is %d.\n", best);


}