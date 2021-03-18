#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;

	printf("a와 b를 입력해주세요: ");
	scanf("%d %d", &a, &b);

	printf("몫 : %d \n", a / b);
	printf("나머지 : %d \n", a % b);



	return 0;
}