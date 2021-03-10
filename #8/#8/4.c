/* 2번 프로그램 : 
double 배열과 크기를 매개변수로 받아서 가장 작은 원소를 반환하는 함수를 정의하시오.
double Min(double arr[], int size); 크기가 8개인 double 배열을 선언하고 임의의 값으로 초기화한다.
앞서 정의한 함수를 이용하여 배열의 내용과 가장 작은 원소 값을 출력하는 프로그램을 작성하시오.*/

/*2번 프로그램에서 정의한 함수들의 반환 값을 포인터 매개변수를 이용하여 해당 값을 전달하도록 수정하여 동일한 기능을 수행하도록 수정하시오.*/

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

	printf("배열의 내용 : ");

	int i;
	for (i = 0; i < 8; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	printf("가장 작은 원소 값 : ");

	int min_arr;

	Min_arr(arr, 8, &min_arr);

	printf("%d", min_arr);


	return 0;
}