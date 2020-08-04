#include<stdio.h>//이 문제 다시보기 
int main(void)
{

	int month[12] = { 11,22,33,44,55,66,11,22,33,44,55,66 };

	int day;
	int k;
	int p = 0;
	printf("탐색할 수입은? ");
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
		printf("수입 %d를 갖는 첫번째 달은 %d월입니다", day, p);
	else if(p>=6)
		printf("수입 %d를 갖는 달은 없습니다", day);

}