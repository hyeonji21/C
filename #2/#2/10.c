#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double number, square, cube;

	printf("�Ǽ�? ");
	scanf("%lf", &number);

	square = number * number;
	cube = number * number * number;

	printf("����: %e\n", square);
	printf("������: %e\n", cube);


	return 0;
}