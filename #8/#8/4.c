/* 2�� ���α׷� : 
double �迭�� ũ�⸦ �Ű������� �޾Ƽ� ���� ���� ���Ҹ� ��ȯ�ϴ� �Լ��� �����Ͻÿ�.
double Min(double arr[], int size); ũ�Ⱑ 8���� double �迭�� �����ϰ� ������ ������ �ʱ�ȭ�Ѵ�.
�ռ� ������ �Լ��� �̿��Ͽ� �迭�� ����� ���� ���� ���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

/*2�� ���α׷����� ������ �Լ����� ��ȯ ���� ������ �Ű������� �̿��Ͽ� �ش� ���� �����ϵ��� �����Ͽ� ������ ����� �����ϵ��� �����Ͻÿ�.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Min_arr(int arr[], int size, int *min_arr)
{
	*min_arr = arr[0];

	int i;
	for (i = 0; i < size; i++) {
		if (arr[i] < *min_arr) {
			*min_arr = arr[i];
		}
	}
}

int main(void)
{
	int arr[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	printf("�迭�� ���� : ");

	int i;
	for (i = 0; i < 8; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	printf("���� ���� ���� �� : ");

	int min_arr;

	Min_arr(arr, 8, &min_arr);

	printf("%d", min_arr);


	return 0;
}