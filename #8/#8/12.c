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

	printf("가로? ");
	scanf("%d", &a);

	printf("세로? ");
	scanf("%d", &b);

	Rectangle(a, b, &area, &perimeter);

	printf("넓이: %d, 둘레: %d", area, perimeter);

	return 0;
}