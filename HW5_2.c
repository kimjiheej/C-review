#include<stdio.h>
int main(void)
{
	
	int radius;
	double const PI = 3.141592;
	double area;
	double circumference;
	printf("Enter a radius:");
	scanf_s("%d", &radius);

	area = PI * radius * radius;
	circumference = 2 * PI * radius;
	printf("The area of a circle with %d: %f\n", radius, area);
	printf("The circumference of a circle with %d:  %f\n", radius, circumference);










}