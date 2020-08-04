#include<stdio.h>
#define MAX_STRING 81//상수를 정의하고 
int main(void)
{
	char str[MAX_STRING];//그 상수 이름을 그대로 써주면 크기가 들어가게 됨.
	int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
	int i;

	printf("문자열 입력<문자수 81 이하>: ",MAX_STRING);
	scanf_s("%s", str, MAX_STRING);

	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'A' || str[i] == 'a')
			countA++;
		else if (str[i] == 'E' || str[i] == 'e')
			countE++;
		else if (str[i] == 'I' || str[i] == 'i')
			countI++;
		else if (str[i] == 'O' || str[i] == 'o')
			countO++;
		else if (str[i] == 'U' || str[i] == 'u')
			countU++;
	}

	printf("a or A: %d개", countA);
	printf("e of E: %d개", countE);
	printf("i or I: %d개", countI);
	printf("o or O: %d개", countO);
	printf("u or U: %d개", countU);
	











}