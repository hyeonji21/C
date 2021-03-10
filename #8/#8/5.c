/* ���� �迭�� ũ�⸦ �Ű������� �޾Ƽ� ������������ �����ϴ� �Լ� void SelSort(int arr[], int size)�� �����Ͻÿ�.
ũ�Ⱑ 10�� ���� �迭�� �����ϰ� ������ ������ �ʱ�ȭ�Ѵ�.
�ռ� ������ �Լ��� �̿��Ͽ� �迭�� ���� ������ ������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�����ϱ� ���� �迭�� ������ ����ϰ�, ������ ���� �迭�� ������ ����Ѵ�.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void SelSort(int arr[], int size)
{
	
	int i, j, temp;
	int index_min;

	for (i = 0; i < size - 1; i++) {
		index_min = i;
		for (j = i + 1; j < size; j++) {
			if (arr[index_min] > arr[j]) {
				index_min = j;
			}
		}
		if (i != index_min) {
			temp = arr[i];
			arr[i] = arr[index_min];
			arr[index_min] = temp;
		}
	}

}

int main(void)
{
	int arr[10] = { 20, 30, 60, 80, 40, 10, 90, 0, 50, 70 };

	printf("���� ��: ");
	int i;
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	SelSort(arr, 10);

	printf("���� ��: ");

	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}