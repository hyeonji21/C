#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int integer, count;
	int i;

	printf("양의 정수? ");
	scanf("%d", &integer);

	printf("배수의 개수? ");
	scanf("%d", &count);

	for (i = 1; i <= count; i++) {
		printf("%d ", integer* i);
	}


	return 0;
}