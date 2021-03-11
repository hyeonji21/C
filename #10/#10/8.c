//8
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[128] = "";
	int key = 0;

	printf("문자열? ");
	gets_s(str, sizeof(str));

	int length = strlen(str);

	printf("암호 키(정수)? ");
	scanf("%d", &key);

	for (int i = 0; i < length; i++) {
		if ((str[i] >= 65 && str[i] <= 90 - key) || (str[i] >= 97 && str[i] <= 122 - key))
			str[i] += key;
		else
			str[i] -= (26 - key);
	}

	printf("암호화된 문자열: %s\n", str);

	return 0;
}