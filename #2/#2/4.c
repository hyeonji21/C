#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float length, height, area;

	printf("밑변과 높이? ");

	scanf("%f", &length);
	scanf("%f", &height);

	area = (length * height) / 2;

	printf("직각삼각형의 면적: %.2f", area);

	return 0;
}