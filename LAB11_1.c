#include<stdio.h>
int sum1ToN(int n);
int main(void)
{

	printf("1 ���� %d������ ���� %d\n", 5, sum1ToN(5));
	printf("1 ���� %d������ ���� %d\n", 7, sum1ToN(7));
	printf("1 ���� %d������ ���� %d\n", 10, sum1ToN(10));



}
int sum1ToN(int n)
{

	int total = 0;

	for (int i = 1; i <= n; i++)
		total += i;

	return total;

}