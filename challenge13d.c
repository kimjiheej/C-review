#include<stdio.h>
#define MAX_STRING 81	
#define BOOL int//bool 은 1과 0의 값을 가지고 있음
#define TRUE 1
#define FALSE 0
BOOL isPalindrome(char str[]);
int main(void)
{

	char str[MAX_STRING];

	printf("* Palindrome체크\n\n");
	printf("문자열 입력(문자수 %d 이하:", MAX_STRING);
	scanf_s("%s", str, MAX_STRING);

	if (isPalindrome(str))//값 자체가 1,0
		printf("\"%s\" is a Palindrome\n\n", str);
	else
		printf("\"%s\" isn't a Palindrome\n\n", str);
}
BOOL isPalindrome(char s[])
{
	int i, j;
	for (i = 0; s[i] != '\0'; i++);

	for (j = 0; s[j] != '\0'; j++)
		if (s[j] != s[i - 1 - j])
			return FALSE;
	return TRUE;
		



}