#include<stdio.h>
void find(int a, int b, int c);
int main(void)
{
	int num1, num2, num3;
	printf("Enter three numbers:");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	find(num1, num2, num3);
}
void find(int a, int b, int c)
{
	int best;

	if (a >= b)
		best = a;
	else
		best = b;
	if (c>best)
		best = c;
	printf("The Biggest number is %d\n", best);

}