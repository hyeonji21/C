// 2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ARR_SIZE 10

int main(void)
{
	double num1, n, size;
	double arr[ARR_SIZE];

	printf("ù ��° ��? ");
	scanf("%lf", &num1);

	printf("����? ");
	scanf("%lf", &n);

	arr[0] = num1;

	printf("������: %.lf ", arr[0]);

	for (int i = 1; i < 10; i++) {
		arr[i] = arr[i - 1] * n;

		if (i >= 8) {
			printf("%.5e ", arr[i]);
		}
		else {
			printf("%.f ", arr[i]);
		}
	}
	return 0;
}