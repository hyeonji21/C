// 7
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double sum_arr(double arr[5], int size) 
{
	int i;
	double sum = 0;

	for (i = 0; i < size; i++) {
		sum += arr[i];
	}

	return sum;
}
int main(void)
{

	double arr[5];

	printf("�Ǽ� 5���� �Է��ϼ���: ");
	for (int i = 0; i < 5; i++) {
		scanf("%lf", &arr[i]);
	}

	int size = sizeof(arr) / sizeof(arr[0]);

	double sum = sum_arr(arr, size);

	printf("�հ� : ");
	printf("%lf", sum);

	return 0;
}