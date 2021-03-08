# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int month, result;

	printf("몇 월? ");
	scanf("%d", &month);

	result = month >= 1 && month <= 12 ? printf("올바른 값입니다.") : printf("잘못된 값입니다.");


	return 0;
}