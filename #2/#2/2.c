#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int length1, length2, area, perimeter;

	printf("가로의 길이? ");
	scanf("%d", &length1);

	printf("세로의 길이? ");
	scanf("%d", &length2);

	area = length1 * length2;
	perimeter = (length1 + length2) * 2;

	printf("직사각형의 넓이: %d \n", area);
	printf("직사각형의 둘레: %d \n", perimeter);

	return 0;
}