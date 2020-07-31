#include<stdio.h>
int main(void)
{

	int n;

	printf("Enter a number:");
	scanf_s("%d", &n);

	printf("\n±æÀÌ´Â %d\n", cycleNb(n));

}
int cycleNb(int num)
{
	int i = 1;
	printf("%d", num);
	if (num == 1)
	{
		
		return 1;
	}
	else
	{
		
		while (num != 1)
		{
			if (num % 2 == 0)
			{
				num /= 2;
				printf("%d ", num);
			}
			else
			{
				num = (num * 3) + 1;
				printf("%d ", num);
			}
			i++;
		}

		return i;


	}
}