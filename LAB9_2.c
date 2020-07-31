#include <Stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)

{

	int answer;
	int result;
	char ch;
	int num1;
	int num2;
	srand(time(NULL));
	num1 = rand() % 100;
	num2 = rand() % 100;


	do
	{
		num1 = rand() % 100;
		num2 = rand() % 100;
		printf("%d + %d= ", num1, num2);
		scanf_s("%d", &answer);
		result = num1 + num2;
		if (result == answer)
			printf("Your answer is right\n");
		else
		{
			printf("Your answer is wrong.\n");
			printf("%d is the right answer\n", num1 + num2);
		}

		while (getchar() != '\n');
		printf("Do you want to continue(y/n)? ");
		scanf_s("%c", &ch);
	} while (ch == 'y');
}