#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	printf("양의 정수? ");
	scanf("%d", &num);

	int i;

	for (i = 2; i <= num; i++) {
		if (num % i == 0) {
			break;
		}
	}

	if (i == num)
		printf("%d는 소수입니다.", num);
	else 
		printf("%d는 소수가 아닙니다.", num);


	return 0;
}