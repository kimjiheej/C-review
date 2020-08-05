#include<stdio.h>
void printArray(int a[], int size);
void reverse(int a[], int size);
int main(void)
{
	int binary[8];
	int num;
	int i, j, k, bindex;

	printf("Enter 양수<<256>:");
	scanf_s("%d", &num);
	bindex = 0;

	k = num;
	while (k != 0)
	{
		k = num / 2;
		j = num % 2;
		binary[bindex] = j;
		num = k;
		bindex++;//외우거라 지희야 
	}

	reverse(binary, bindex);
	printArray(binary, bindex);

}
void printArray(int a[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", a[i]);


}
void reverse(int a[], int size)
{
	int temp;

	for (int i = 0; i < size/2; i++)
	{
		temp = a[i];
		a[i] = a[size - 1 - i];
		a[size - 1 - i] = temp;
	}



}