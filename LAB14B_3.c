//�Ϲ� �迭���� �޸� ���ڿ��� ���� �� ũ�⸦ ���� ���� �� �ʿ䰡 ����.
//�ֳ��ϸ� ���� '\0'���� ������ �����̴�.
#include<stdio.h>
void printUpperCase(char s[]);
int strLength(char str[]);
int main(void)
{
    char str[81];
    printf("Enter a string:");
    scanf_s("%s", str,81);

    printf("���̴� %d\n", strLength(str));

    printf("�빮�ڸ� ����ϸ�\n");

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
int strLength(char str[])//������ ���� ũ�Ⱑ �ʿ䰡 ����. �׳� �迭�� �ָ� ��.
{
    int k = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        k++;
    }

    return k;


}