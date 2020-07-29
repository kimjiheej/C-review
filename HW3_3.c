#include<stdio.h>
int main(void)
{
	int hour, minute, second, totalseconds;
	printf("Enter h m s:");
	scanf_s("%d %d %d", &hour, &minute, &second);
	printf("--Calculation Result--\n");
	

	totalseconds = (hour * 3600) + (minute * 60) + second;
	printf("Total %d seconds\n", totalseconds);













}