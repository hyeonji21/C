#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	int i;

	int arr1[10] = { 10, 34, 5, 9, 10, 4, 18, 3, 29, 22 };
	int arr2[10] = { 4, 56, 7, 18, 65, 32, 11, 21, 86, 43 };

	printf("arr 1 \t arr2 \t 배열의 차 \n");

	for (i = 0; i < 10; i++) {
		printf("%d \t %d \t %d \n", arr1[i], arr2[i], arr1[i] - arr2[i]);

	}

	return 0;
}