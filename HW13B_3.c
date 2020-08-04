#include<stdio.h>
int main(void)
{

	char word[100];
	char newword[100];
	
	int i, j, k;
	printf("Enter one word:");
	scanf_s("%s", word, 100);

	for (i = 0; word[i] != '\0'; i++);//길이는 0부터 시작이 아니라 1부터 시작이다.

	
	for (j = 0; word[j] != '\0'; j++)
	{
		newword[i - 1 - j] = word[j];
	}
	newword[j] = '\0';

	printf("The reversed word is %s", newword);









}