#include<stdio.h>
int indexSearch(int a[], int size, int searchKey);
#define SIZE 12
int main(void)
{

	int incomes[SIZE] = { 11,22,33,44,55,66,11,22,33,44,55,66 };
	int income;
	int id;

	printf("탐색할 수입은? ");
	scanf_s("%d", &income);

	id = indexSearch(incomes, SIZE, income);

	if (id == -1)
		printf("수입 %d를 갖는 달은 없습니다\n", income);
	else
		printf("수입 %d를 갖는 첫번째 달은 %d월입니다\n", income, id + 1);








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
	return -1;//중요한 포인트는 return 은 한번만 해줘야 한다는 점임. 그래서 for문을 사용해서 같은 것을 찾고 break문으로 멈춰줌. 근데 같은 것이 없을 경우에는 return -1
}