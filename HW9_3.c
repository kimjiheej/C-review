#include<stdio.h>
int main(void)
{

	int i = 1;
	int score;
	int total = 0;
	while (i <= 5)
	{
		printf("0���� ū ���� �Է�(%d��°): ",i);
		scanf_s("%d", &score);
		
		while (score <= 0)
		{
			printf("�Է��� �߸��Ǿ����ϴ�. 0���� ū ���� �ٽ� �Է�(%d��°): ", i);
			scanf_s("%d", &score);
		}
		i++;
		total += score;


	}
	printf("�Էµ� ���� �� ��: %d", total);










}