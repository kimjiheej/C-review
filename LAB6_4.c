#include<stdio.h>
int main(void)
{

	char grade;
	int score;

	printf("Enter a student grade(A of F):");
	scanf_s("%c", &grade);

	if (grade == 'A')
	{
		printf("Enter your GOOD score:");
		scanf_s("%d", &score);
		printf("������ %d���̸� ���� ������ �´±���. ��� �������ؿ�.", score);
	}
	else
	{
		printf("Enter your BAD score:");
		scanf_s("%d", &score);
		printf("������ %d���̶�� �� ������ �ؾ߰ڳ׿�.", score);
	}










}