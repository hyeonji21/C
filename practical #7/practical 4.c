#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int arr[10] = { 23, 45, 12, -34, 65, 25, 89, 61, 26, 11 };

	int i;
	int max_arr, min_arr;

	printf("배열의 내용: ");

	for (i = 0; i < 10; i++) {

		printf("%d ", arr[i]);

	}

	max_arr = arr[0];
	min_arr = arr[0];

	for (i = 0; i < 10; i++) {
		if (arr[i] > max_arr) {
			max_arr = arr[i];
		}
		if (arr[i] < min_arr) {
			min_arr = arr[i];
		}

	}
	printf("\n");

	printf("최대값: %d\n", max_arr);
	printf("최소값: %d\n", min_arr);


	return 0;

}