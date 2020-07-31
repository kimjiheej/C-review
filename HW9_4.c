#include<stdio.h>
int main(void)
{
	int i = 0;
	int prime = 2;


	do {

		for (int j = 2; j < prime; j++)
		{
	
			 
			if(prime % j !=0)
			{
				i++;
				printf("%d번째 소수는 %d\n", i, prime);
				break;
			}
		
		
		}
		prime++;

			

	} while (i ==10);









}