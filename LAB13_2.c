#include<stdio.h>//�� ���� �ٽú��� 
int main(void)
{

	int month[12] = { 11,22,33,44,55,66,11,22,33,44,55,66 };

	int day;
	int k;
	int p = 0;
	printf("Ž���� ������? ");
	scanf_s("%d", &day);

	for (int i = 0; i < 12; i++)
	{
		p++;
		if (month[i] == day)
		{


			break;
		}
	}
	if (p < 6)
		printf("���� %d�� ���� ù��° ���� %d���Դϴ�", day, p);
	else if(p>=6)
		printf("���� %d�� ���� ���� �����ϴ�", day);

}