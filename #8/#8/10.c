// 4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Arr_sum(double arr[], int size, double* sum)
{
	int i;
	double result = 0;

	for (i = 0; i < size; i++) {
		result += arr[i];
	}

	*sum = result;
}

int main(void)
{
	double arr[5];

	printf("�Ǽ� 5���� �Է��ϼ���: ");

	int i;
	for (i = 0; i < 5; i++) {
		scanf("%lf", &arr[i]);
	}

	double sum;

	Arr_sum(arr, 5, &sum);

	printf("�հ�: ");
	printf("%lf", sum);
	
	return 0;

}