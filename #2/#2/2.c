#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int length1, length2, area, perimeter;

	printf("������ ����? ");
	scanf("%d", &length1);

	printf("������ ����? ");
	scanf("%d", &length2);

	area = length1 * length2;
	perimeter = (length1 + length2) * 2;

	printf("���簢���� ����: %d \n", area);
	printf("���簢���� �ѷ�: %d \n", perimeter);

	return 0;
}