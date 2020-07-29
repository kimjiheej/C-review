#include<stdio.h>
int main(void)
{

    char upper;
    
    printf("Enter an upper letter(A-Y):");
    scanf_s("%c", &upper);

    printf("Character given is %c(%d)\n", upper, upper);
    printf("The next character is %c(%d)\n", upper + 1, upper + 1);
    printf("The lower case letter is %c(%d)\n", upper + 32, upper + 32);













}