#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	char op, ch;
	int result;
	int answer;
	int num1, num2;

	
	//do while 문은 안에 넣을 때 do 문 안에 넣어주기 
	do {
		srand(time(NULL));
		num1 = rand() % 100;
		num2 = rand() % 100;
		op = rand() % 4;
		switch (op)
		{
		case 0:

			op = '+';
			result = num1 + num2;
			break;

		case 1:

			op = '-';
			result = num1 - num2;
			break;

		case 2:

			op = '*';
			result = num1 * num2;
			break;

		case 3:

			op = '/';
			result = num1 / num2;
			break;

		}

		printf("%d %c %d = ", num1, op, num2);
		scanf_s("%d", &answer);

		if (result == answer)
		{
			printf("Your answer is right\n");
		}
		else
		{
			printf("Your answer is wrong.\n");
			printf("%d is the right answer\n", result);
		}

		while (getchar() != '\n');

		printf("Do you want to continue(y/n)?");
		scanf_s("%c", &ch);



	} while (ch == 'y');
	







}