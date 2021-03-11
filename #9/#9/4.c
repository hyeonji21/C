// 11
#include <stdio.h>
void sort_array(int* p)
{
	int i, j, temp;
	int index_min = 0;

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10 - i - 1; j++) {
			if (p[j] > p[j + 1]) {
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}

}
int main(void)
{
	int arr[10] = { 92, 34, 76, 32, 15, 28, 41, 55, 89, 62 };

	printf("정렬 전: ");
	
	int i;
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	int* p = arr;

	sort_array(p);

	printf("\n");

	printf("정렬 후: ");

	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	return 0;

}