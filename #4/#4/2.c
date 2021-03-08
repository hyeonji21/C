#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	int a, b, change;

	printf("두 정수를 입력해주세요 : ");
	scanf("%d %d", &a, &b);

	if (a > b) {
		change = a;
		a = b;
		b = change;
	}

	for (i = a; i <= b; i++){
		sum += i;
	}

	printf("두 정수 사이의 합 : %d", sum);


	return 0;
}