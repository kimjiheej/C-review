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
			isprime(num);//�̰� ��ü�� ���ϵ� ��
			if (isprime(num) == 0)
				printf("�Ҽ��� �ƴմϴ�\n");
			else
				printf("�Ҽ��Դϴ�\n");
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