#include <stdio.h>
int main(void)
{
	int binary[8];
	int num, b, k, j, i;


	printf("Enter ���<<256>:");
	scanf_s("%d", &num);
	b = -1;
	
	do {
		b++;
		k = num / 2;
		j = num % 2;
		binary[b] = j;
		num = k;//�߿� �ܿ�� 




	} while (k != 0);

	for (i = b; i >= 0; i--)
	{
		printf("%d", binary[i]);
	}
}