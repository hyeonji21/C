#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void print_array(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

}

int main(void)
{
	int arr[SIZE] = { 23, 45, 12, 34, 65, 25, 89, 61, 26, 11 };
	int i, j, temp;
	int index_min;


	printf("배열의 내용: ");
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	for (i = 0; i < SIZE-1; i++) {
		index_min = i;
		for (j = i + 1; j < SIZE; j++) {
			if (arr[index_min] > arr[j]) {
				index_min = j;
			}
		}

		if (i != index_min) {
			temp = arr[i];
			arr[i] = arr[index_min];
			arr[index_min] = temp;
		}

		printf("%d회: ", i+1);
		print_array(arr, SIZE);
	}

	return 0;
}

		




