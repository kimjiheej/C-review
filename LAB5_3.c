#include<stdio.h>

int main(void)
{

	int radius;
	double const PI = 3.141592;//��� const
	double area;

	printf("Enter a radius:");
	scanf_s("%d", &radius);

	area = PI * radius;
	printf("The area of a circle widh %d:       %f\n", radius, area);












}