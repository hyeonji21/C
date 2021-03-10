#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int arr[5];
	int i;
	float sum = 0;


	for (i = 0; i <= 4; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	printf("배열에 저장된 정수 : ");
	for (i = 0; i <= 4; i++) {
		printf("%d ", arr[i]);
	}

	printf("\n");

	printf("정수의 평균 : %f", sum / 5);

	return 0;
}