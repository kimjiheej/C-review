#include<stdio.h>//���߿� �ٽ� �����ֱ� 
int main(void)
{

	char word[100];
	int i, j, num;
	int sum = 0;

	printf("Enter a word:");
	scanf_s("%s", word, 100);

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= '0' && word[i] <= '9')
		{
			num = word[i] - '0';

			for (j = i; word[j + 1] >= '0' && word[j + 1] <= '9'; j++)//j�� �Ǻ��ϴ� ������. i�� �Ѱ��� �÷����鼭 ���� check.
			{
				num = num * 10 + (word[j + 1] - '0');
				i++;
			}
			sum += num;
		}

	}
	printf("���� ���� ���� ���� %d\n", sum);




















}