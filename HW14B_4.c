#include<stdio.h>
int love(char s[]);
int main(void)
{
	
	char str[100];
	printf("�ܾ �Է��ϼ���(��ĭ����): ");
	scanf_s("%s", str, 100);

	printf("������ %d", love(str));






}
int love(char s[])
{
	int total = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			total += s[i] - 64;
		else if (s[i] >= 'a' && s[i] <= 'z')
			total += s[i] - 96;
		else
			total += s[i];
	}

	return total;

}