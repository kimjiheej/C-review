#include<stdio.h>
int main(void)
{

	char word[80];
	char newword[80];
	int i;
	printf("Enter one word: ");
	scanf_s("%s", word, 80);

	printf("Word given: %s\n", word);

	for (i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= 'A' && word[i] <= 'Z')
			newword[i] = word[i] + 32;//식 기억해두기
		else if (word[i] >= 'a' && word[i] <= 'z')
			newword[i] = word[i] - 32;//식 기억해두기 
		else
			newword[i] = word[i];
	}
	newword[i] = '\0';
	printf("%s", newword);








}