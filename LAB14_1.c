#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void generateData(int[], int);
void printData(int[], int);//int 형의 배열임
int averageData(int[], int);
int maxData(int[], int);//여기에 보이는 원형들처럼 매개변수의 이름을 생략할 수도 있다!
int main(void)
{

	int data[10];
	int average;
	int best;
	srand(time(NULL));

	generateData(data, 10);
	printf("엘리먼트들은 ");
	printData(data, 10);
	printf("\n");

	average = averageData(data, 10);
	printf("엘리먼트의 평균은 %d\n", average);
	printf("\n");
	best = maxData(data, 10);//배열을 출력할 때 그냥 배열의 이름을 써주면 됨.
	printf("엘리먼트들 중 가장 큰수는 %d\n", best);
	
}
void generateData(int a0[], int size)
{
	for (int i = 0; i < size; i++)
		a0[i] = rand() % 100;

}
void printData(int a2[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", a2[i]);


}
int averageData(int a1[], int size)
{
	int total = 0;
	int average;
	for (int i = 0; i < size; i++)
		total += a1[i];

	average = total / size;
	return average;


}
int maxData(int a3[], int size)
{
	int i;
	int best;
	best = a3[0];
	for (i = 0; i < size; i++)
	{
		if (best < a3[i])
			best = a3[i];
	}
	return best;


}
