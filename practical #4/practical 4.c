#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char letter;
	printf("영문자를 입력하세요 : ");
	scanf("%c", &letter);


	if (letter >= 'a' && letter <= 'z') {
		letter = letter - 32;
		printf("결과 : %c", letter);
	}
	else {
		printf("결과 : %c", letter);
	}


	return 0;

}