//2

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char str[20];
	
	printf("���� �̸�? ");
	gets_s(str, sizeof(str));

	printf("�̴ϼ�: ");

	for (int i = 0; i <= str[i] != '\0'; i++) {
		if (isupper(str[i]) == 1) {
			printf("%c", str[i]);
		}
	}
	
	return 0;

}