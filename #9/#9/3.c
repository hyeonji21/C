// 10
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void arr_full(int* arr, int d)
{

	int i;
	for (i = 1; i < 10; i++) {
		arr[i] = arr[i - 1] + d;
	}
}
int main(void)
{
	int num1;
	int d;

	printf("ù ��° ��? ");
	scanf("%d", &num1);

	int arr[10] = {num1};

	printf("����? ");
	scanf("%d", &d);

	arr_full(arr, d);

	arr[0] = num1;
	printf("��������: %d ", arr[0]);

	int i;
	for (i = 1; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	return 0;

}

