#include<stdio.h>
int indexSearch(int a[], int size, int searchKey);
#define SIZE 12
int main(void)
{

	int incomes[SIZE] = { 11,22,33,44,55,66,11,22,33,44,55,66 };
	int income;
	int id;

	printf("Ž���� ������? ");
	scanf_s("%d", &income);

	id = indexSearch(incomes, SIZE, income);

	if (id == -1)
		printf("���� %d�� ���� ���� �����ϴ�\n", income);
	else
		printf("���� %d�� ���� ù��° ���� %d���Դϴ�\n", income, id + 1);








}
int indexSearch(int a[], int size, int searchKey)
{
	int k = 0;
	for (int i = 0; i < size / 2; i++)
	{
		
		if (a[i] == searchKey)
		{
			return k;
			break;
		}
		k++;
	}
	return -1;//�߿��� ����Ʈ�� return �� �ѹ��� ����� �Ѵٴ� ����. �׷��� for���� ����ؼ� ���� ���� ã�� break������ ������. �ٵ� ���� ���� ���� ��쿡�� return -1
}