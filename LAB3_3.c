#include<stdio.h>
int main(void)
{
	int hour, minute, minutes;
	printf("Enter hour:");
	scanf_s("%d", &hour);
	printf("Enter minute:");
	scanf_s("%d", &minute);

	minutes = (hour * 60) + minute;

	printf("Total %d minutes", minutes);
}