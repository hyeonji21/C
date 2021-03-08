#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double number, square, cube;

	printf("½Ç¼ö? ");
	scanf("%lf", &number);

	square = number * number;
	cube = number * number * number;

	printf("Á¦°ö: %e\n", square);
	printf("¼¼Á¦°ö: %e\n", cube);


	return 0;
}