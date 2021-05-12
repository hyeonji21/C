// 8
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void arr_random(int* p, int size)
{
	srand(time(NULL));

	int i;
	for (i = 0; i < size; i++) {
		p[i] = rand() % 100;
	}

}
int main(void)
{
	int arr[10];

	arr_random(arr, 10);

	int i;
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	return 0;

}