#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double arr[10] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
	int i;
	double sum = 0, cnt = 0;
	double max = 0, min = 0;


	for (i = 0; i < 10; i++) {
		sum += arr[i];
		cnt += 1;
	}

	max = arr[0];
	min = arr[0];

	for (i = 0; i < 10; i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
		if (min > arr[i]) {
			min = arr[i];
		}
	}

	printf("��� : %f \n", sum / 10);
	printf("�ִ밪 : %f \n", max);
	printf("�ּҰ� : %f \n", min);



	return 0;

}