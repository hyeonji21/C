#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float length, height, area;

	printf("�غ��� ����? ");

	scanf("%f", &length);
	scanf("%f", &height);

	area = (length * height) / 2;

	printf("�����ﰢ���� ����: %.2f", area);

	return 0;
}