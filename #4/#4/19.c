#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int n, i;
	int count = 0;

	int N;
	printf("양의 정수? ");
	scanf("%d", &N);

	for (n = 1; n <= N; n++) {
		for (i = 2; i <= n; i++) {
			if (n % i == 0)
				break;
		}
		if (i == n) {
			printf("%3d ", i);
			count++;
			if (count % 10) == 0)
				printf("\n");
		}
	}

	return 0;
}