//2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double arr[3];

	double* p = arr;

	int i;
	for (i = 0; i < 3; i++) {
		printf("x[%d]ÀÇ ÁÖ¼Ò : %X \n", i, &p[i]);
	}

	return 0;
}
