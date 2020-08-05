#include<stdio.h>
#define SIZE 5
void printArray(int a[], int size);
int equalArray(int a[], int b[], int size);
int main(void)
{
	int arrayA[SIZE] = { 1,2,3,4,1 };
	int arrayB[SIZE];
	int arrayC[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		arrayB[i] = arrayA[i];
		arrayC[i] = arrayA[5 - i - 1];
	}
	printArray(arrayA, SIZE);
	printf("\n");
	printArray(arrayB, SIZE);
	printf("\n");
	printArray(arrayC, SIZE);
	printf("\n");
	if (equalArray(arrayA, arrayB, SIZE) == 1)
		printf("ArrayA와 arrayB는 같다\n");
	else
		printf("ArrayA와 arrayB는 다르다\n");

	if (equalArray(arrayA, arrayC, SIZE) == 1)
		printf("ArrayA와 arrayC는 같다\n");
	else
		printf("ArrayA와 arrayC는 다르다\n");


}
void printArray(int a[], int size)
{
	for (int i = 0; i < SIZE; i++)
		printf("%d ", a[i]);


}
int equalArray(int a[], int b[], int size)//그냥 배열 이름을 지정해 줄 때 사용함. 그리고 생각해야 할것은 자료명을 붙여주어야 함. 함수를 정의했기 때문.
{
	for (int i = 0; i < SIZE; i++)
		if (a[i] != b[i])
			return 0;
	return 1;



}//void 함수는 return 이 없고 void가 아닌 함수는 return이 있음.