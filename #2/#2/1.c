#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int length, area, perimeter;

	printf("한 변의 길이 ? ");
	scanf("%d", &length);

	area = length * length;
	perimeter = 4 * length;

	printf("정사각형의 넓이: %d \n", area);
	printf("정사각형의 둘레: %d \n", perimeter);


	return 0;
}