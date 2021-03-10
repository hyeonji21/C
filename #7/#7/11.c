// 11
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

	srand(time(0));

	int arr[10] = { 12, 43, 39, 98, 71, 63, 8, 16, 54, 85 };

	printf("¼ÅÇÃ Àü: ");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	
	printf("\n");


	int i, n = 0;

	while (n < 100) {

		int r = rand() % 9 + 1;
		int temp = arr[0];
		arr[0] = arr[r];
		arr[r] = temp;
		n += 1;
	}

	n = 0;

	printf("¼ÅÇÃ ÈÄ: ");
	while (n < 10)
	{
		printf("%d ", arr[n]);
		n += 1;
	}


	return 0;
}