#include<stdio.h>
#define MAX_STRING 81	
#define BOOL int//bool �� 1�� 0�� ���� ������ ����
#define TRUE 1
#define FALSE 0
BOOL isPalindrome(char str[]);
int main(void)
{

	char str[MAX_STRING];

	printf("* Palindromeüũ\n\n");
	printf("���ڿ� �Է�(���ڼ� %d ����:", MAX_STRING);
	scanf_s("%s", str, MAX_STRING);

	if (isPalindrome(str))//�� ��ü�� 1,0
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