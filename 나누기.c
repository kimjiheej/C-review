//20200961 ±èÁöÈñ
#include <stdio.h>
int main(void)
{
	int num;
	int i;
	int result;

	printf("Enter a number: ");
	scanf_s("%d", &num);

	result = num;
	while (result > 1)
	{
		for (int k = 0; k < (num - result) / 2; k++)
			printf(" ");
		for (int j = 0; j < result; j++)
			printf("*");
		printf("\n");
		result -= 2;
	}
}