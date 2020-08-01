#include<stdio.h>
void number(int a);
int main(void)
{
	int num;

	printf("Enter a number:");
	scanf_s("%d", &num);
	number(num);



}
void number(int a)
{
	int i;
	int total = 0;
	for (i = 1; i <= a; i++)
		total += i;
	printf("1 ~ %dÀÇ ÇÕ: %d", a, total);


}