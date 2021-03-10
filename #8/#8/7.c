// Chapter8 ∆˜¿Œ≈Õ - 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double arr[10] = { 0.10, 2.00, 3.40, 5.20, 4.50, 7.80, 9.70, 1.40, 6.60, 7.20 };


	double* p;
	p = arr;

	int i;
	for (i = 0; i < 10; i++) {
		printf("%.2f ", p[i]);
	}

	return 0;
}