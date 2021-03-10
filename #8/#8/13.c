// 7
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void swap_array(int* p1, int* p2)
{
	int temp;

	int i;
	for (i = 0; i < 5; i++) {
		temp = p1[i];
		p1[i] = p2[i];
		p2[i] = temp;
	}
}
int main(void)
{
	int arr1[5] = { 1, 3, 5, 7, 9 };
	int arr2[5] = { 0, 2, 4, 6, 8 };

	int i;
	printf("a 배열: ");
	for (i = 0; i < 5; i++) {
		printf("%d ", arr1[i]);
	}

	printf("\n");

	printf("b 배열: ");
	for (i = 0; i < 5; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");

	printf("<<swap_array 호출 후 >>");

	swap_array(arr1, arr2);

	printf("\n");

	printf("a 배열: ");
	for (i = 0; i < 5; i++) {
		printf("%d ", arr1[i]);
	}

	printf("\n");

	printf("b 배열: ");
	for (i = 0; i < 5; i++) {
		printf("%d ", arr2[i]);
	}
	return 0;
}