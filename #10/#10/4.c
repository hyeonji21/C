//4
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char str[128] = "";
	int n = 0;

	printf("문자열? ");
	gets_s(str, sizeof(str));

	int length = strlen(str);

	for (int i = 0; i < length; i++)
	{
		if (isupper(str[i])) {
			str[i] = tolower(str[i]);
			n++;
		}
		if (islower(str[i])) {
			if (n == 0) {
				str[i] = toupper(str[i]);
			}
		}
	}
	printf("변환후: ");
	puts(str);

	return 0;
}