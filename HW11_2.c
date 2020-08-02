#include<stdio.h>
int pow(int a, int b);
int main(void)
{

	for (int i = 0; i <= 10; i++)
		printf("%d ^ %d == %d\n", 5, i, pow(5, i));




}
int pow(int a, int b)
{

	int k = 1;

	for (int i = 1; i <= b; i++)
		k *= a;
	return k;





}