#include<stdio.h>
int main(void)
{

	int base, height, size;
	int width, round;

	printf("밑변과 높이를 입력하세요:");
	scanf_s("%d %d", &base, &height);

	size = (base * height) / 2;
	printf("밑변과 높이가 각각 %d와 %d인 삼각형의 넓이는 %d이다\n", base, height, size);

	printf("직사각형의 가로와 높이를 입력하세요:");
	scanf_s("%d %d", &width, &height);
	
	size = width * height;
	round = (width + height) * 2;

	printf("가로와 높이가 각각 %d와 %d인 직사각형의 둘레와 넓이는 %d와 %d이다\n", width, height,round,size);












}