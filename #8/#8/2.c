/* double �迭�� ũ�⸦ �Ű������� �޾Ƽ� ���� ���� ���Ҹ� ��ȯ�ϴ� �Լ��� �����Ͻÿ�. 
double Min(double arr[], int size); ũ�Ⱑ 8���� double �迭�� �����ϰ� ������ ������ �ʱ�ȭ�Ѵ�. 
�ռ� ������ �Լ��� �̿��Ͽ� �迭�� ����� ���� ���� ���� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double Min(double arr[], int size)
{

	int i;
	double min_arr = 0;

	min_arr = arr[0];

	for (i = 0; i < size; i++) {
		if (arr[i] < min_arr) {
			min_arr = arr[i];
		}

	}
	return min_arr;
}

int main(void)
{
	double arr[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };

	printf("�迭�� ���� : ");

	int i;
	for (i = 0; i < 8; i++) {
		printf("%.lf ", arr[i]);
	}

	printf("\n");

	printf("���� ���� ���� �� : ");

	printf("%.lf", Min(arr, 8));

	return 0;
}