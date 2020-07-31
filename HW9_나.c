#include<stdio.h>
void plus(int a, int b);
int main(void)
{

	plus(1, 5);
	plus(6, 10);
	plus(11, 15);
	plus(16, 20);
	plus(21, 25);
	plus(26, 30);
	



}
void plus(int a, int b)
{
	int total = 0;

	
	for (int i = a; i <= b; i++)
		total += i;
	printf("%d-%d±îÁö ÇÕ = %d\n", a, b, total);




}