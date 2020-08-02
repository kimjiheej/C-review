#include<stdio.h>
int isprime(int num);
int main(void)
{

	while (1)
	{
		int num;
		printf("Enter a number<-1 for exit>: ");
		scanf_s("%d", &num);

		if (num == -1)
			break;
		else
		{
			isprime(num);//이거 자체가 리턴된 값
			if (isprime(num) == 0)
				printf("소수가 아닙니다\n");
			else
				printf("소수입니다\n");
		}
	}





}
int isprime(int num)
{

	for (int i = 2; i < num; i++)
		if (num % i == 0)
			return 0;
	return 1;




}