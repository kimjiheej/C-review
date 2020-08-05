//일반 배열과는 달리 문자열의 경우는 그 크기를 같이 전달 할 필요가 없다.
//왜냐하면 끝이 '\0'으로 끝나기 때문이다.
#include<stdio.h>
void printUpperCase(char s[]);
int strLength(char str[]);
int main(void)
{
    char str[81];
    printf("Enter a string:");
    scanf_s("%s", str,81);

    printf("길이는 %d\n", strLength(str));

    printf("대문자만 출력하면\n");

    printUpperCase(str);


}
void printUpperCase(char s[])
{

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            printf("%c", s[i]);
    }

}
int strLength(char str[])//전달할 때에 크기가 필요가 없음. 그냥 배열만 주면 됨.
{
    int k = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        k++;
    }

    return k;


}