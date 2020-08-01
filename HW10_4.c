#include<stdio.h>
void sum(int a, int b);
int main(void)
{
	int num1, num2;
	printf("Enter two numbers:");
	scanf_s("%d %d", &num1, &num2);

	sum(num1, num2);


}
void sum(int a, int b)
{
	int total = 0;
	for (int i = a; i <= b; i++)
		total += i;

	printf("%d ~ %dÀÇ ÇÕ: %d", a, b, total);





}