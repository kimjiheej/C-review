#include<stdio.h>
int main(void)
{
	char word[100];
	char newword[100];
	int i, j;
	printf("Enter the first word:");
	scanf_s("%s", word, 100);
	printf("Enter the second word;");
	scanf_s("%s", newword, 100);

	for (i = 0; word[i] != '\0'; i++);
	for (j = 0; newword[j] != '\0'; j++);

	
	if (j != i)
		printf("두 단어는 다르다");
	else
	{
		for (i = 0; word[i] != '\0'; i++)
			if (word[i] != newword[i])
				printf("두 단어는 다르다");
		printf("두 단어는 같다");
	}





}