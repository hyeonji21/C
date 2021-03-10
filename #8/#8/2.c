/* double 배열과 크기를 매개변수로 받아서 가장 작은 원소를 반환하는 함수를 정의하시오. 
double Min(double arr[], int size); 크기가 8개인 double 배열을 선언하고 임의의 값으로 초기화한다. 
앞서 정의한 함수를 이용하여 배열의 내용과 가장 작은 원소 값을 출력하는 프로그램을 작성하시오.*/

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

	printf("배열의 내용 : ");

	int i;
	for (i = 0; i < 8; i++) {
		printf("%.lf ", arr[i]);
	}

	printf("\n");

	printf("가장 작은 원소 값 : ");

	printf("%.lf", Min(arr, 8));

	return 0;
}