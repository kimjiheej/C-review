#include<stdio.h>
int main(void)
{

	char word[100];
	int total = 0;
	printf("Enter one word:");
	scanf_s("%s", word, 100);

	for (int i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= 'A' && word[i] <= 'Z')
			continue;
		else if (word[i] >= 'a' && word[i] <= 'z')
			continue;
		else
		{
			total += word[i] - 48;//이 부분 중요. 뺀 것을 더해주어야 함. 두줄로 쓰지 않기.
		}//0의 아스키 값은 48이다
	}
	printf("안에 있는 숫자들의 합은 %d\n", total);
}