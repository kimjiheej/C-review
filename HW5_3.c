#include<stdio.h>
//#define CONVERSION_FACTORE 9.0/5.0

int main(void)
{
	double celsius, fahrenheit;
	printf("Enter a celsius temperature:");
	scanf_s("%lf", &celsius);

	fahrenheit = celsius * 9.0 / 5.0 + 32;
	printf("Fahrenheit Equivalent: %f\n", fahrenheit);















}