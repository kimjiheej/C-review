#include<stdio.h>
int result(int x, int y);
int main(void)
{
	int x;
	int y;
	printf("Enter the number X: ");
	scanf_s("%d", &x);
	printf("Enter the number Y: ");
	scanf_s("%d", &y);

	printf("%d ^ %d == %d", x, y, result(x, y));




}
int result(int x, int y)
{
	int k = 1;

	for (int i = 1; i <= y; i++)
		k *= x;

	return k;


}