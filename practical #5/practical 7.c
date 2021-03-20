#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int i = 0, j = 0;
	int cnt = 0;
	int sum = 0;

	printf("입력(양의 정수) : ");
	scanf("%d", &n);


	printf("72보다 작은 소수 : ");

	for (i = 2; i <= n; i++) {
		for (j = 2; j <= i; j++) {
			if (i % j == 0) {
				break;
			}
		}
		if (i == j) {
			printf("%d ", i);
			sum += i;
		}
	}

	printf("\n");

	printf("72까지의 소수의 합 : %d", sum);

	return 0;

}