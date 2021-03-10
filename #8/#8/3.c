/*1번 프로그램 : 
정수 배열과 크기를 매개변수로 받아서 배열의 원소들의 평균값을 반환하는 함수를 정의하시오.
double Average(int arr[], int size); 크기가 12개인 정수 배열을 선언하고 임의의 값으로 초기화한다.
앞서 정의한 함수를 이용하여 배열의 내용과 평균값을 출력하는 프로그램을 작성하시오.*/

/*1번 프로그램에서 정의한 함수들의 반환 값을 포인터 매개변수를 이용하여 해당 값을 전달하도록 수정하여 동일한 기능을 수행하도록 수정하시오. 
double Average(int arr[], int size); 함수는 void Average(int arr[], int size, double* average);로 수정되어 
평균값을 average 포인터로 전달한다.*/

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

	printf("배열의 내용 : ");

	int i;
	for (i = 0; i < 12; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	double average;

	printf("평균값 : ");

	Average(arr, 12, &average);

	printf("%lf", average);

	return 0;
}