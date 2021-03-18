#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	printf("정수를 입력하세요 : ");
	scanf("%d", &a);

	if (a % 2 == 0) {
		printf("%d는 짝수입니다.", a);
	}
	else {
		printf("%d은 홀수입니다.", a);
	}


	return 0;
}