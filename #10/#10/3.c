//3
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(void)
{

	char str[128];
	int count = 0;

	printf("문자열? ");
	gets_s(str, sizeof(str));


	for (int i = 0; str[i] != '\0'; i++) {
		if (isalpha(str[i])) {
			count += 1;
		}
	}

	printf("영문자의 개수: %d", count);

	return 0;
}