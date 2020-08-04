#include<stdio.h>
int main(void)
{

	char str[100];

	printf("Enter one word:");
	scanf_s("%s", str, 100);

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] < 'Z')
			printf("%c\n", str[i]);
	}









}