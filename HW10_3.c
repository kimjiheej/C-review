#include<stdio.h>
void stars(int star,int star1);
int main(void)
{
	int tom, mary;
	printf("Tom's score? ");
	scanf_s("%d", &tom);
	printf("Mary's score? ");
	scanf_s("%d", &mary);
	printf("-----------Score Histogram----------------\n");
	stars(tom, mary);





}
void stars(int star,int star1)
{
	printf("Tom         :");
	for (int i = 1; i <= star; i++)
		printf("*");
	printf("<%02d>\n", star);
	printf("Mary        :");
	for (int i = 1; i <= star1; i++)
		printf("*");
	printf("<%02d>\n", star1);


}