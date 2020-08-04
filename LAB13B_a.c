#include<stdio.h>
int main(void)
{
	
	char word[11];
	printf("Enter a word(<=10 chars): ");
	scanf_s("%s", word,11);

	
	for (int i = 0; word[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			printf("%c", word[i]);
	}












}