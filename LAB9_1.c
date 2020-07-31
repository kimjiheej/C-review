#include<stdio.h>
int main(void)
{

	int height, weight, ideal;
	char ch;
	do {
		printf("Enter your height:");
		scanf_s("%d", &height);
		ideal = height - 110;
		printf("Your ideal weight is %d.\n", ideal);
		
		while (getchar() != '\n');//이전에 입력문이 있은 다음에 문자를 읽어야 할 때 사용
		printf("Do you want to continue(y/n)?");
		scanf_s("%c", &ch); 

	} while (ch == 'y');














}