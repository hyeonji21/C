//5
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void reverse(char* p, int length)
{
	char tmp;

	for (int i = 0; i < length / 2; i++) {
		tmp = p[i];
		p[i] = p[length - i - 1];
		p[length - i - 1] = tmp;
	}
}
int main(void)
{
	char str[128] = "";
	int length;

	printf("���ڿ�? ");
	gets_s(str, sizeof(str));

	length = strlen(str);

	reverse(str, length);

	printf("�������� �� ���ڿ�: ");
	puts(str);

	return 0;
}