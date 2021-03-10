//3 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr[10] = { 12, 54, 23, 43, 87, 31, 67, 92, 79, 7 };
	int num;

	int i;
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	int* p = arr;

	printf("Á¤¼ö? ");
	scanf("%d", &num);

	for (i = 0; i < 10; i++) {
		printf("%d ", *(p + i) + num);
	}

	return 0;
}