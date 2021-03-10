/*정수 배열과 크기를 매개변수로 받아서 배열의 원소들의 평균값을 반환하는 함수를 정의하시오. 
double Average(int arr[], int size); 크기가 12개인 정수 배열을 선언하고 임의의 값으로 초기화한다. 
앞서 정의한 함수를 이용하여 배열의 내용과 평균값을 출력하는 프로그램을 작성하시오.*/

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

	printf("배열의 내용 : ");

	int i;
	for (i = 0; i < 12; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	printf("평균값 : ");
	printf("%lf", Average(arr, 12));

	return 0;

}