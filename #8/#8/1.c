/*���� �迭�� ũ�⸦ �Ű������� �޾Ƽ� �迭�� ���ҵ��� ��հ��� ��ȯ�ϴ� �Լ��� �����Ͻÿ�. 
double Average(int arr[], int size); ũ�Ⱑ 12���� ���� �迭�� �����ϰ� ������ ������ �ʱ�ȭ�Ѵ�. 
�ռ� ������ �Լ��� �̿��Ͽ� �迭�� ����� ��հ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double Average(int arr[], int size)
{
	int i;
	int sum = 0, avg = 0;
	int result = 0;

	for (i = 0; i < size; i++) {
		sum += arr[i];
	}

	result = sum / size;

	return result;
}

int main(void)
{
	int arr[12] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120 };

	printf("�迭�� ���� : ");

	int i;
	for (i = 0; i < 12; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	printf("��հ� : ");
	printf("%lf", Average(arr, 12));

	return 0;

}