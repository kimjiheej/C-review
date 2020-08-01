#include<stdio.h>
void print5Chars(char ch);
int main(void)
{

	print5Chars('*');
	print5Chars('+');
	print5Chars('1');
}
void print5Chars(char ch)
{
	int i;
	for (i = 1; i <= 5; i++)
	
		printf("%c", ch);
	printf("\n");


}