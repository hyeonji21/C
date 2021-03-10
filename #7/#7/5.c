// 5
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double arr[10] = { 1.2, 3.1, 4.3, 4.5, 6.7, 2.3, 8.7, 9.5, 2.3, 5.8 };

	int i;

	printf("배열: ");

	for (i = 0;i < 10;i++) {
		printf("%.1lf ", arr[i]);
	}

	double tmp;
	int a = 0, b = 9;

	for (i = 0; i < 5; i++) {
		tmp = arr[a];
		arr[a] = arr[b];
		arr[b] = tmp;
		a++;
		b--;
	}

	printf("\n");
	printf("역순: ");
	
	for (i = 0;i < 10;i++) {
		printf("%.1lf ", arr[i]);
	}

	return 0;

}

