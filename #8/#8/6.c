/*double �迭�� ũ�� �� ���� ����(1�̸� ��������, 0�̸� ������������ ������)�� �Ű������� �޾Ƽ� �����ϴ� �Լ� 
void SelSortUD(double arr[], int size, int up)�� �����Ͻÿ�.
ũ�Ⱑ 10�� double �迭�� �����ϰ� ������ ������ �ʱ�ȭ�Ѵ�.
�ռ� ������ �Լ��� �̿��Ͽ� �迭�� ���� ���������� ������������ �����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�����ϱ� ���� �迭�� ������ ����ϰ�, ������������ ������ ���� �迭�� ����� ������������ ������ ���� �迭�� ������ ����Ѵ�.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void SelSortUD(double arr[], int size, int up)
{

	int i, j;
	double temp;
	int index_min;

	if (up == 1) {
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

	if (up == 0) {

		for (i = 0; i < size - 1; i++) {
			index_min = i;
			for (j = i + 1; j < size; j++) {
				if (arr[index_min] < arr[j]) {
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

}
int main(void)
{
	double arr[10] = { 2.2, 3.3, 6.6, 8.8, 7.7, 9.9, 1.1, 4.4, 5.5, 11.11 };

	printf("���� ��: ");
	int i;
	for (i = 0; i < 10; i++) {
		printf("%lf ", arr[i]);
	}

	printf("\n");

	printf("�������� ���� ��: ");

	SelSortUD(arr, 10, 1);

	for (i = 0; i < 10; i++) {
		printf("%lf ", arr[i]);
	}

	printf("\n");

	printf("�������� ���� ��: ");

	SelSortUD(arr, 10, 0);

	for (i = 0; i < 10; i++) {
		printf("%lf ", arr[i]);
	}
	return 0;

}