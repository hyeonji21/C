/*double 배열과 크기 및 정렬 방향(1이면 오름차순, 0이면 내림차순으로 정렬함)을 매개변수로 받아서 정렬하는 함수 
void SelSortUD(double arr[], int size, int up)를 정의하시오.
크기가 10인 double 배열을 선언하고 임의의 값으로 초기화한다.
앞서 정의한 함수를 이용하여 배열의 값을 오름차순과 내림차순으로 정렬하여 출력하는 프로그램을 작성하시오.
정렬하기 전의 배열의 내용을 출력하고, 오름차순으로 정렬한 후의 배열의 내용과 내림차순으로 정렬한 후의 배열의 내용을 출력한다.*/

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

	printf("정렬 전: ");
	int i;
	for (i = 0; i < 10; i++) {
		printf("%lf ", arr[i]);
	}

	printf("\n");

	printf("오름차순 정렬 후: ");

	SelSortUD(arr, 10, 1);

	for (i = 0; i < 10; i++) {
		printf("%lf ", arr[i]);
	}

	printf("\n");

	printf("내림차순 정렬 후: ");

	SelSortUD(arr, 10, 0);

	for (i = 0; i < 10; i++) {
		printf("%lf ", arr[i]);
	}
	return 0;

}