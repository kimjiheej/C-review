#include<stdio.h>
int main(void)
{

	char word[100];
	int total = 0;
	printf("Enter one word:");
	scanf_s("%s", word, 100);

	for (int i = 0; word[i] != '\0'; i++)
	{
		if (word[i] >= 'A' && word[i] <= 'Z')
			continue;
		else if (word[i] >= 'a' && word[i] <= 'z')
			continue;
		else
		{
			total += word[i] - 48;//�� �κ� �߿�. �� ���� �����־�� ��. ���ٷ� ���� �ʱ�.
		}//0�� �ƽ�Ű ���� 48�̴�
	}
	printf("�ȿ� �ִ� ���ڵ��� ���� %d\n", total);
}