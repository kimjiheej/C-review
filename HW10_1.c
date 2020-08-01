#include<stdio.h>
void printManyChars(char ch, int num);
int main(void)
{
  
    char ch;
    int num;
    printf("Enter a character to print:");
    scanf_s("%c", &ch);
    printf("Enter the number of characters:");
    scanf_s("%d", &num);
    printManyChars(ch, num);




}
void printManyChars(char ch, int num)
{
    for (int i = 1; i <= num; i++)
        printf("%c", ch);



}