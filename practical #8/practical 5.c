#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int arr[2][10]; 
	int i, j;

	printf("입력: ");

	for (i = 0; i < 10; i++) {
		scanf("%d", &arr[0][i]);
	}


	printf("총점: ");

	for (i = 0; i < 10; i++) {
		printf("%d ", arr[0][i]);
	}

	printf("\n");

	printf("석차: ");

	for (i = 0; i < 10; i++) {
		int n = 0;
		for (j = 0; j < 10; j++) {
			if (arr[0][i] < arr[0][j]) {
				n += 1;
			}
		}
		arr[1][i] = n + 1;
	}


	for (i = 0; i < 10; i++) {
		printf("%2d ", arr[1][i]);
	}


	return 0;

}