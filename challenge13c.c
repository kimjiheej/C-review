#include<stdio.h>
#define MAX_STRING 81//����� �����ϰ� 
int main(void)
{
	char str[MAX_STRING];//�� ��� �̸��� �״�� ���ָ� ũ�Ⱑ ���� ��.
	int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
	int i;

	printf("���ڿ� �Է�<���ڼ� 81 ����>: ",MAX_STRING);
	scanf_s("%s", str, MAX_STRING);

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'A' || str[i] == 'a')
			countA++;
		else if (str[i] == 'E' || str[i] == 'e')
			countE++;
		else if (str[i] == 'I' || str[i] == 'i')
			countI++;
		else if (str[i] == 'O' || str[i] == 'o')
			countO++;
		else if (str[i] == 'U' || str[i] == 'u')
			countU++;
	}

	printf("a or A: %d��", countA);
	printf("e of E: %d��", countE);
	printf("i or I: %d��", countI);
	printf("o or O: %d��", countO);
	printf("u or U: %d��", countU);
	











}