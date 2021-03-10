// Chapter7 배열 - 1

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ARR_SIZE 10

int main(void)
{
	int num1, n, size;
	int arr[ARR_SIZE];

	printf("첫 번째 항? ");
	scanf("%d", &num1);

	printf("공차? ");
	scanf("%d", &n);

	arr[0] = num1;

	printf("등차수열: %d ", arr[0]);

	for (int i = 1; i < 10; i++) {
		arr[i] = arr[i - 1] + n;
		printf("%d ", arr[i]);
	}
	return 0;
}