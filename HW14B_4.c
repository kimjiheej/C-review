#include<stdio.h>
int love(char s[]);
int main(void)
{
	
	char str[100];
	printf("단어를 입력하세요(빈칸없이): ");
	scanf_s("%s", str, 100);

	printf("점수는 %d", love(str));






}
int love(char s[])
{
	int total = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			total += s[i] - 64;
		else if (s[i] >= 'a' && s[i] <= 'z')
			total += s[i] - 96;
		else
			total += s[i];
	}

	return total;

}