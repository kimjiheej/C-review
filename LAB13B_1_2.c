#include<stdio.h>
int main(void)
{
	int i;
	char ch;
	char str[10];

	printf("--변경 전 문자열--\n");
	scanf_s("%s", str, 10);

	for (i = 0; i < 4; i++)
	{
		ch = str[7 - i];
		str[7 - i] = str[i];
		str[i] = ch;
	}
	
	printf("\n변경 후 문자열--\n");
	printf("%s\n", str);








}