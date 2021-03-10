//3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[10] = {23, 45, 62, 12, 99, 83, 23, 50, 72, 37};

	int max, min;
	max = arr[0];
	min = arr[0];

	int i;
	printf("배열: ");
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	for (i = 1; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
	}

	printf("최대값: %d\n", max);
	printf("최소값: %d\n", min);


	return 0;
}