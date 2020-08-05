#include<stdio.h>
void printArray(int a[], int size);
void reverse(int a[], int size);
int main(void)

{
	int num;
	int list[10];
	printf("Enter the number((=10) ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++)
	{
		printf("Enter 원소갑:");
		scanf_s("%d", &list[i]);
	}
	
	printArray(list, num);
	printf("\n");
	reverse(list, num);






}
void printArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", a[i]);

}
void reverse(int a[], int size)
{
	int temp;
	for (int i = 0; i < size / 2; i++)
	{
		temp = a[i];
		a[i] = a[size - 1 - i];
		a[size - 1 - i] = temp; //항상 잘 기억해두기 !! temp =a; a=b; b=temp;
	}
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}



}