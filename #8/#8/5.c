/* 정수 배열과 크기를 매개변수로 받아서 오름차순으로 정렬하는 함수 void SelSort(int arr[], int size)를 정의하시오.
크기가 10인 정수 배열을 선언하고 임의의 값으로 초기화한다.
앞서 정의한 함수를 이용하여 배열의 값을 오름차 순으로 정렬하여 출력하는 프로그램을 작성하시오.
정렬하기 전의 배열의 내용을 출력하고, 정렬한 후의 배열의 내용을 출력한다.*/

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

	printf("정렬 전: ");
	int i;
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	SelSort(arr, 10);

	printf("정렬 후: ");

	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}