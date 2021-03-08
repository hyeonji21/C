#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int rectangle(int width, int length)
{
	return (width + length) * 2;

}

int main(void)
{
	int a, b;

	printf("가로? ");
	scanf("%d", &a);

	printf("세로? ");
	scanf("%d", &b);

	printf("직사각형의 둘레: %d", rectangle(a, b));

	return 0;

}