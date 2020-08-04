#include<stdio.h>//나중에 다시 꼭봐주기 
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

			for (j = i; word[j + 1] >= '0' && word[j + 1] <= '9'; j++)//j를 판별하는 과정임. i를 한개씩 늘려가면서 숫자 check.
			{
				num = num * 10 + (word[j + 1] - '0');
				i++;
			}
			sum += num;
		}

	}
	printf("글자 안의 수의 합은 %d\n", sum);




















}