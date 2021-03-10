// 5
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void get_min_max(int arr[], int size, int* max, int*min)
{
	*max = arr[0];
	*min = arr[0];

	int i;
	for (i = 0; i < size; i++) {
		if (arr[i] > *max) {
			*max = arr[i];
		}
		if (arr[i] < *min) {
			*min = arr[i];
		}
	}
}

int main(void)
{
	int arr[10] = { 23, 45, 62, 12, 99, 83, 23, 50, 72, 37 };

	int* p = arr;

	printf("배열: ");
	
	int i;
	for (i = 0; i < 10; i++) {
		printf("%d ", p[i]);
	}

	printf("\n");

	int max, min;

	get_min_max(arr, 10, &max, &min);

	printf("최대값: %d \n", max);
	printf("최소값: %d \n", min);

	return 0;
}