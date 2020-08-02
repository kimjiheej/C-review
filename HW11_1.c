#include<stdio.h>
int summton(int sum,int sum1);
int main(void)
{

	printf("%d 부터 %d 까지의 합은 %d\n",2,5,summton(3,5));
	printf("%d 부터 %d 까지의 합은 %d\n",3,7,summton(3,7));
	printf("%d 부터 %d 까지의 합은 %d\n",2,10,summton(2,10));



}
int summton(int sum, int sum1)
{

	int total = 0;
	
	for (int i = sum; i <= sum1; i++)
		total += i;
	
	return total;



}