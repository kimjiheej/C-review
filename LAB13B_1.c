#include<stdio.h>
int main(void)
{

	char string[80];
	int i, j;
	printf("Enter a string: ");
	scanf_s("%s", string, 80);

	for (i = 0; string[i] != '\0'; i++);

	printf("±æÀÌ´Â %d\n", i);

	for (j = i - 1; j >= 0; j--)
		printf("%c\n", string[j]);







}