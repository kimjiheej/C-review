#include<stdio.h>
int main(void)
{
	
	char word[100];
	char newword[100];
	int i;
	int j = 0;
	printf("Enter one word:");
	scanf_s("%s", word, 100);

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= 'A' && word[i] <= 'Z')
		{
			newword[j] = word[i];
			j++;
		}
	}
	newword[j] = '\0';

	printf("%s", newword);
		









}