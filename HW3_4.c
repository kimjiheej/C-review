#include<stdio.h>
int main(void)
{

	int base, height, size;
	int width, round;

	printf("�غ��� ���̸� �Է��ϼ���:");
	scanf_s("%d %d", &base, &height);

	size = (base * height) / 2;
	printf("�غ��� ���̰� ���� %d�� %d�� �ﰢ���� ���̴� %d�̴�\n", base, height, size);

	printf("���簢���� ���ο� ���̸� �Է��ϼ���:");
	scanf_s("%d %d", &width, &height);
	
	size = width * height;
	round = (width + height) * 2;

	printf("���ο� ���̰� ���� %d�� %d�� ���簢���� �ѷ��� ���̴� %d�� %d�̴�\n", width, height,round,size);












}