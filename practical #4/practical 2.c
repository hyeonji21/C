#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char letter;

	scanf("%c", &letter);
	
	if (letter >= 'A' && letter <= 'Z') {
		printf("대문자 %c입니다.", letter);
	}
	else
		printf("소문자 %c입니다.", letter);
	
	return 0;

}