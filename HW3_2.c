#include<stdio.h>
int main(void)
{

	int totalseconds, hour, minute, second;

	printf("Enter the total seconds:");
	scanf_s("%d", &totalseconds);//scanf_s("%d\n)¾ÈµÊ. \n ¾²¸é ¾ÈµÊ

	printf("--Calculation Result--\n");
	printf("%d seconds\n", totalseconds);
	
	hour = totalseconds / 3600;
	minute = totalseconds % 3600 / 60;
	second = totalseconds % 3600 % 60;

	printf("%dh %dm %ds\n", hour, minute, second);
	



















}