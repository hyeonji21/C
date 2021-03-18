#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;

	printf("두 수를 입력하세요 : ");
	scanf("%d %d", &a, &b);

	if (a < 0) {
		a = -a;
	}
	if (b < 0) {
		b = -b;
	}

	printf("결과 : %d", a + b);


	return 0;
}