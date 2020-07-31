#include<Stdio.h>
int main(void)
{

	//학생수 총점 평균 가장좋은점수 


	int score;
	int total = 0;
	double average;
	int best = 0;
	int j = 0;
	
	printf("Enter a score(-1 for exit):");
	scanf_s("%d", &score);
	while(score != -1)
	{
		total += score;
		j++;
		printf("Enter a score(-1 for exit):");
		scanf_s("%d", &score);
		
		

		if (best < score)
			best = score;

	}
	average = (double)total / j;

	if (total == 0)
	{
		printf("You've entered 0 students.\n");
		printf("There is no data\n");
	}
	else
	{
		printf("Your've entered %d students.\n", j);
		printf("The total is %d\n", total);
		printf("The average is %.1f\n", average);
		printf("The best score is %d\n", best);
	}
	//맨 처음이 -1이라면 끝내야 하기 때문에 앞에서 값 미리 받아주기 









}