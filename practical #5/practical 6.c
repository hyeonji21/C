#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;
	int max = 0, max_point = 0;


	for (i = 1; ; i++) {

		sum += i;

		if (sum >= 500) {
			break;
		}
		else {
			max_point = i;
			max = sum;
		}
	}

	printf("최대의 n값 : %d \n", max_point);
	printf("합 : %d", max);


	return 0;
}