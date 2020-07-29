#include<stdio.h>
int main(void)
{
	int minutes, hour, minute;
	printf("Enter the total minutes:");
	scanf_s("%d", &minutes);

	hour = minutes / 60;
	minute = minutes % 60;

	printf("%d minutes\n", minutes);
	printf("%dh %dm\n", hour, minute);
	
	















}