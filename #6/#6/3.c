#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ARR_SIZE 100

int main(void)
{

	double arr[ARR_SIZE] = { 1, 1 };
	int i;
	int cnt = 0;


	for (i = 2; i <= ARR_SIZE-1; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}


	for (i = 0; i < ARR_SIZE; i++) {
		printf("%17.f ", arr[i]);
		cnt += 1;

		if (cnt % 10 == 0) {
			printf("\n");
		}
	}


	return 0;

}