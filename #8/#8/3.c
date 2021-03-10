/*1�� ���α׷� : 
���� �迭�� ũ�⸦ �Ű������� �޾Ƽ� �迭�� ���ҵ��� ��հ��� ��ȯ�ϴ� �Լ��� �����Ͻÿ�.
double Average(int arr[], int size); ũ�Ⱑ 12���� ���� �迭�� �����ϰ� ������ ������ �ʱ�ȭ�Ѵ�.
�ռ� ������ �Լ��� �̿��Ͽ� �迭�� ����� ��հ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.*/

/*1�� ���α׷����� ������ �Լ����� ��ȯ ���� ������ �Ű������� �̿��Ͽ� �ش� ���� �����ϵ��� �����Ͽ� ������ ����� �����ϵ��� �����Ͻÿ�. 
double Average(int arr[], int size); �Լ��� void Average(int arr[], int size, double* average);�� �����Ǿ� 
��հ��� average �����ͷ� �����Ѵ�.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Average(int arr[], int size, double* average)
{
	int i;
	int sum = 0;
	
	for (i = 0; i < size; i++) {
		sum += arr[i];
	}

	*average = sum / size;
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

	double average;

	printf("��հ� : ");

	Average(arr, 12, &average);

	printf("%lf", average);

	return 0;
}