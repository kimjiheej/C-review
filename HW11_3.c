#include<stdio.h>
int scorereading(void);
char gradedecision(int s1, int s2);
int main(void)
{
	int score1, score2;

	score1 = scorereading();
	score2 = scorereading();

	printf("Grade is B!\n", gradedecision(score1, score2));



}
int scorereading(void)
{
	int a;
	printf("Enter a score:");
	scanf_s("%d", &a);
	return a;


}
char gradedecision(int s1, int s2)
{
	int average;
	average = (s1 + s2) / 2;
	
	if (average >= 80)
		return 'A';
	else if (average < 80 && average >= 50)
		return 'B';
	else
		return 'F';




}