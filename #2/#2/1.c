#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int length, area, perimeter;

	printf("�� ���� ���� ? ");
	scanf("%d", &length);

	area = length * length;
	perimeter = 4 * length;

	printf("���簢���� ����: %d \n", area);
	printf("���簢���� �ѷ�: %d \n", perimeter);


	return 0;
}