// 6
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Rectangle(int a, int b, int* area, int* perimeter)
{
	*area = (a * b);

	*perimeter = (a + b) * 2;
}

int main(void)
{
	int a, b;
	int area, perimeter;

	printf("����? ");
	scanf("%d", &a);

	printf("����? ");
	scanf("%d", &b);

	Rectangle(a, b, &area, &perimeter);

	printf("����: %d, �ѷ�: %d", area, perimeter);

	return 0;
}