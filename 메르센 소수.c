#include<stdio.h>
int twotothepower(int n)
{
    int k = 1;
	for (int i = 1; i <= n; i++)
		k *= 2;
	return k;




}
int isprime(int x)
{

	for (int i = 2; i < (x-1); i++)
		if ((x-1) % i == 0)
			return 0;
	return 1;





}
int main(void)
{
	int num;
	int star;
	printf("Enter a number:");
	scanf_s("%d", &num);


	for (int i = 2; i <= num; i++)
	{
		star = twotothepower(i);
		isprime(star);//요거 자체가 값!!
		if (isprime(star) == 1)
			printf("(2^%d - 1) = %d\n", i, twotothepower(i)-1);


	}
}