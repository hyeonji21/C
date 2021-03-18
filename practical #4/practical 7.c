#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char a, b, c;
	char result;

	printf("영문자를 입력하세요 : ");
	scanf("%c %c %c", &a, &b, &c);

	if (a < b) {
		if (a < c) {
			printf("결과 : %c", a);
		}
		else {
			printf("결과 : %c", c);
		}
	}
	else {
		if (b < c) {
			printf("결과 : %c", b);
		}
		else {
			printf("결과 : %c", c);
		}
	}




	return 0;
}