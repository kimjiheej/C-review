#include<stdio.h>
int scorereading(void);
char gradedecision(int s1);
int main(void)
{

	int score;
	score = scorereading();
	printf("Grade is %c\n", gradedecision(score));



}
int scorereading(void)
{

	int s;

	printf("Enter a score:");
	scanf_s("%d", &s);
	return s;



}
char gradedecision(int s1)
{
	if (s1 >= 80)
		return 'A';
	else if (s1 < 80 && s1 >= 50)
		return 'B';
	else
		return 'F';





}